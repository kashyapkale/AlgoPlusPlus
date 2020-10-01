#include<iostream>
#include<algorithm>
#define lli long long lli
using namespace std;

lli scholarship(lli N,lli M,lli X,lli Y){
    lli s = 0;
    lli e = N;
    lli mid = e/2;
    lli ans = -1;

    while(s<=e){
		mid = (e + s)/2;
        if(mid*X <= M + ((N-mid)*Y)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans;

}



lli main(){
    lli N,M,X,Y;
    cin>>N>>M>>X>>Y;
    cout<<scholarship(N,M,X,Y);
}