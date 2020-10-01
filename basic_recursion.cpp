#include<iostream>
using namespace std;
//Code to find product and power of a number using recursion
lli power(lli a,lli n){
    if(n==1){
        return a;
    }
    return a*power(a,n-1);
}

lli product(lli a,lli n){
    if(n==1){
        return a;
    }
    return a+product(a,n-1);
}

lli main(){
    cout<<power(2,10)<<endl;
    cout<<product(2,10);
    return 0;
}

