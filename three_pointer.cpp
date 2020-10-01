#include<iostream>
#include<algorithm>
#define max 1000
using namespace std;



void three_pointer(lli arr[],lli n,lli key){
    lli temp;
    sort(arr,arr+n);
	for(lli m=0;m<n;m++){
		temp = key - arr[m];
		lli i = m+1;
    	lli j = n-1;
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

lli main(){
    lli arr[1000],n,key;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;
    //input array
    cout<<"Enter elements : ";
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
	cin>>key;
    three_pointer(arr,n,key);
    return 0;
}