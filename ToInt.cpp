#include<iostream>
#include<algorithm>
#include <string.h> 
#define max 100
using namespace std;

lli convertToINT(string s){
    lli p = 1;
    lli sum = 0;
    for(lli i=s.length()-1; i>=0; i--){
        sum += (s[i]-'0')*p;
        p=p*10; 
    }

    return sum;
}


lli main(){
    //char s[100];
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    cout<<convertToINT(s);
}