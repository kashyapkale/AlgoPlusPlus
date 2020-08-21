#include<iostream>
using namespace std;
//Code to find product and power of a number using recursion
int power(int a,int n){
    if(n==1){
        return a;
    }
    return a*power(a,n-1);
}

int product(int a,int n){
    if(n==1){
        return a;
    }
    return a+product(a,n-1);
}

int main(){
    cout<<power(2,10)<<endl;
    cout<<product(2,10);
    return 0;
}

