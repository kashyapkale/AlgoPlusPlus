#include<iostream>
#include<vector>
#define lli long long
using namespace std;

/*
lli minIndex(vector<lli> &v,lli i ){
	int mini = 1000000,ind;
	for(;i<v.size();i++){
		if(v[i]<mini){
			mini = v[i];
			ind = i;
		}
	}
	return ind;
}*/

void swap(lli *a,lli *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	}

void insertionSort(vector<lli> &v){
	int i,j;
	lli temp,mini,key;

	for(i = 1;i<v.size();i++){
		key = v[i];
		j = i-1;
		while(j>=0 && v[j]>key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key; 
	}

	}


int main() {
	vector<lli> v;
	lli N,temp;
	cin>>N;
	while(N--){
		cin>>temp;
		v.push_back(temp);
	}
	insertionSort(v);
	for(lli i = 0;i<v.size();i++)
		cout<<v[i]<<" ";

	return 0;
}