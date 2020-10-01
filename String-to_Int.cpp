//String to Int alphabet
#include<iostream>
#include<vector>
#include <string.h>
#define lli long long
using namespace std;

int str_to_int(string T,int len){
    if(len==0)
        return 0;
    
    return (str_to_int(T,len-1) * 10) + (T[len-1]-'0');
}

int main() {
    string T;
    cin>>T;
    cout<<str_to_int(T,T.size());
	return 0;
}