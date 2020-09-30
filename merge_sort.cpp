//Merge Sort
#include<iostream>
#include<vector>
#define MAX 1000000
#define lli long long
using namespace std;

void merge(int *a,int s,int e){
    int temp[MAX];
    //int i = j = 0;
    int mid = (s+e)/2;
    int k = s;
    int i = s;
    int j = mid + 1;
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }

    while(i<=mid){
        temp[k++] = a[i++];
    }

    while(j<=e){
         temp[k++] = a[j++];
    }

    //Copy all elements from temporary to original
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
}


void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e); 
}


int main() {
	//vector<lli> v;
	
	//int v[] = {12,6,32,4,13,9,3,22,27,10};
	int arr[MAX];
	int N;
	cin>>N;
	for(int i = 0;i<10;i++) 
		cin>>arr[i];

    mergeSort(arr,0,N-1);
	for(int i = 0;i<N;i++) 
		cout<<arr[i]<<" ";

	return 0;
}