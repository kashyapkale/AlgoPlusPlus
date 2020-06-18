#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int j = N-1,flag = 1,i=0;
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