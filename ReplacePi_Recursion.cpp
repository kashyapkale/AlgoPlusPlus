//ReplacePi_Recursion
//Replace all pi in a string with 3.14
#include<iostream>
#include<vector>
#define lli long long
using namespace std;

void replacePi(char arr[],int index){
    if(arr[index] == '\0' || arr[index+1] == '\0')
        return;
    
    if(arr[index]=='p' && arr[index+1]=='i'){
        int j = index+2;
        while(arr[j]!='\0'){
            j++;
        }
        while(j>=index+2){
            arr[j+2] = arr[j];
            j--;
        }
        arr[index] = '3';
        arr[index+1] = '.';
        arr[index+2] = '1';
        arr[index+3] = '4';
        replacePi(arr,index+4);
    }
    else{
        replacePi(arr,index+1);
    }
    return;
}

int main() {
    char ch[100000];
    cin>>ch;
    replacePi(ch,0);
    cout<<ch<<endl;
	return 0;
}