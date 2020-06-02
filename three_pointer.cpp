#include<iostream>
#include<algorithm>
#define max 1000
using namespace std;



void three_pointer(int arr[],int n,int key){
    int temp;
    sort(arr,arr+n);
	for(int m=0;m<n;m++){
		temp = key - arr[m];
		int i = m+1;
    	int j = n-1;
	while(i<j){
        if(arr[i]+arr[j] == temp){
			
				cout<<arr[m]<<", "<<arr[i]<<" and "<<arr[j]<<endl;
            	i++;
            	j--;

        }
        else if(arr[i]+arr[j] > temp){
            j--;
        }
        else if(arr[i]+arr[j] < temp){
            i++;
        }
    }

	}

    
}

int main(){
    int arr[1000],n,key;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;
    //input array
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cin>>key;
    three_pointer(arr,n,key);
    return 0;
}