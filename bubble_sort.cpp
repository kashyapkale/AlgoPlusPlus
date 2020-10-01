#include<iostream>
#include<vector>
#define lli long long
using namespace std;
void bubbleSort(vector<lli> &v){
	lli i,j;
	lli temp;
	//cout<<v.size();
	for(i=0;i<v.size()-1;i++){
		for(j = 0;j<v.size()-i-1;j++){
			if(v[j]>v[j+1]){
				temp = v[j];
				v[j]=v[j+1];
				v[j+1] = temp;	
			}

		}

	}
}

lli main() {
	vector<lli> v;
	lli N,temp;
	cin>>N;
	while(N--){
		cin>>temp;
		v.push_back(temp);
	}
	bubbleSort(v);
	for(lli i = 0;i<v.size();i++)
		cout<<v[i]<<endl;
	return 0;
}