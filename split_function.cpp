#include<iostream>
#include<algorithm>
#include <string.h> 
#define max 100
using namespace std;

char* split(char* str,char delim){

    static char*input = NULL;
    if(str!=NULL)
        input = str;

    if(input == NULL){
        return NULL;
    }
    char *output = new char(strlen(input+1));
    int i=0;
    for(  ; input[i]!='\0' ; i++ ){
        if(input[i]!=delim){
            output[i]=input[i];
            }
        else{
            output[i]='\0';
            input = input + i + 1;
            return output;        
        }
        
    }

    output[i]='\0';
    input=NULL;
    return output;
}


int main(){
    char s[100];
    cout<<"Enter a string"<<endl;
    cin.getline(s,100);
    cout<<endl;
    char *ptr =split(s,' ');
    cout<<ptr;
    cout<<endl;
    while(ptr!=NULL)
    {char *ptr =split(NULL,' ');
    cout<<ptr;
    cout<<endl;
    }
    return 0;

}
    