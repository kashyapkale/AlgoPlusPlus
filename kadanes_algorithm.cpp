#include<iostream>
#include<algorithm>
using namespace std;

//algorithm for kadanes algorithm
void kadanes_algorithm(int arr[],int n){
    int current_max_sum = arr[0] ;
    int max_sum = arr[0];
    for (int i = 1; i < n ; i++){
        current_max_sum = max(arr[i],(arr[i]+current_max_sum));
        if(current_max_sum<0)
            current_max_sum = 0;
        if(max_sum<current_max_sum)
            max_sum = current_max_sum;
    }
    cout<<max_sum;
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
    //calling kadanes algorithm
    kadanes_algorithm(arr,n);
    
    return 0;
}
