//number to digits alphabet
#include<iostream>
#include<vector>
#define lli long long
using namespace std;

void num_to_dig(int T){
    if(T==0)
        return;
    
    num_to_dig(T/10);
    cout<<T%10<<" ";
}

int main() {
    int T;
    cin>>T;
    num_to_dig(T);
	return 0;
}