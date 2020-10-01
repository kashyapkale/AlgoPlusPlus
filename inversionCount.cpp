//Inversion Count
#include<iostream>
#include<vector>
//#define MAX 1000000000
#define lli long long int
using namespace std;

 int merge(lli *a,lli s,lli e){
    lli temp[200000];
    lli cnt = 0;
    //lli i = j = 0;
    lli mid = (s+e)/2;
    lli k = s;
    lli i = s;
    lli j = mid + 1;
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            cnt += mid - i + 1; 
        }
    }
    

    while(i<=mid){
        temp[k++] = a[i++];
    }

    while(j<=e){
         temp[k++] = a[j++];
    }

    //Copy all elements from temporary to original
    for(lli i=s;i<=e;i++){
        a[i] = temp[i];
    }

    return cnt;
}


lli inversion_Count(lli a[],lli s,lli e){
    if(s>=e){
        return 0;
    }

    lli mid = (s+e)/2;
    lli A = inversion_Count(a,s,mid);
    lli B = inversion_Count(a,mid+1,e);
    lli C  = merge(a,s,e); 
}


int main() {
	//vector<lli> v;
	lli N;
	cin>>N;
	//int v[] = {12,6,32,4,13,9,3,22,27,10};
	lli arr[N];
	
	for(lli i = 0;i<N;i++) 
		cin>>arr[i];

    mergeSort(arr,0,N-1);
	for(lli i = 0;i<N;i++) 
		cout<<arr[i]<<" ";

	return 0;
}