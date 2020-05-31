#include<iostream>
#include<algorithm>
#include <string.h> 
#define max 100
using namespace std;

int convertToINT(string s){
    int p = 1;
    int sum = 0;
    for(int i=s.length()-1; i>=0; i--){
        sum += (s[i]-'0')*p;
        p=p*10; 
    }

    return sum;
}


int main(){
    //char s[100];
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    cout<<convertToINT(s);
}