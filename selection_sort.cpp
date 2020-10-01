#include<iostream>
#include<vector>
#define lli long long
using namespace std;

lli minIndex(vector<lli> &v,lli i ){
	lli mini = 1000000,ind;
	for(;i<v.size();i++){
		if(v[i]<mini){
			mini = v[i];
			ind = i;
		}
	}
	return ind;
}

void swap(lli *a,lli *b){
	lli temp;
	temp = *a;
	*a = *b;
	*b = temp;
	}

void selectionSort(vector<lli> &v){
	lli i,j;
	lli temp,mini;
	//cout<<v.size();
	for(i=0;i<v.size();i++){
		mini = minIndex(v,i);
		swap(v[i],v[mini]);
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
	selectionSort(v);
	for(lli i = 0;i<v.size();i++)
		cout<<v[i]<<endl;

	return 0;
}