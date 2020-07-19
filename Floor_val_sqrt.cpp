#include<iostream>
#include<algorithm>
using namespace std;


int sqrt_m(int N){
    int s = 1;
    int e = N;
    int mid = N/2,ans;

    while(s<=e){
        if(mid*mid>N){
            e = mid - 1;
            mid = e/2;
        }
        else{
            ans = mid;
            s = mid+1;
            mid = (s + e)/2;
        }
    }

    return ans;
}

int main(){
    int N;
    cin>>N;
    cout<<sqrt_m(N);
}