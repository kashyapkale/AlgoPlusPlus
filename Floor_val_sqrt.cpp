#include<iostream>
#include<algorithm>
using namespace std;


lli sqrt_m(lli N){
    lli s = 1;
    lli e = N;
    lli mid = N/2,ans;

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

lli main(){
    lli N;
    cin>>N;
    cout<<sqrt_m(N);
}