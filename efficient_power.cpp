#include<iostream>
using namespace std;
//Code to find efficient power of a number using recursion

//Normal Power Function
int power(int a,int n){
    if(n==1){
        return a;
    }
    return a*power(a,n-1);
}

//optimised efficient power function
int optimised_power(int a,int n){
    if(n==0){
        return 1;
    }
    //recursive case
    int smaller_ans = optimised_power(a,n/2);
    smaller_ans *= smaller_ans;

    if(n&1){
        return smaller_ans * a;
    }

    return smaller_ans;
}

int main(){
    cout<<power(2,10)<<endl;
    cout<<optimised_power(2,10)<<endl;
    return 0;
}

