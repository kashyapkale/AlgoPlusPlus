#include<iostream>
#include<algorithm>
using namespace std;

void two_pointer(int arr[],int n){
    int key;
    cout<<"Enter Key : ";
    cin>>key;
    sort(arr,arr+n);
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j] == key){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j] > key){
            j--;
        }
        else if(arr[i]+arr[j] > key){
            i++;
        }
    }
}

int main(){
    int arr[100],n;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;
    //input array
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    two_pointer(arr,n);
    return 0;
}
