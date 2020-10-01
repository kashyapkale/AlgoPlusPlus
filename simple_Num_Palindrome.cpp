#include<iostream>
using namespace std;
lli main() {
	lli N;
	cin>>N;
	lli arr[N];
	for(lli i=0;i<N;i++){
		cin>>arr[i];
	}
	lli j = N-1,flag = 1,i=0;
	while(i<=j){
		if(arr[i]!=arr[j]){
			flag = 0;
		}
		i++;
		j--;
	}

	flag?cout<<"true":cout<<"false";
	return 0;
}