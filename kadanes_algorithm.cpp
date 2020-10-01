#include<iostream>
#include<algorithm>
using namespace std;

//algorithm for kadanes algorithm
void kadanes_algorithm(lli arr[],lli n){
    lli current_max_sum = arr[0] ;
    lli max_sum = arr[0];
    for (lli i = 1; i < n ; i++){
        current_max_sum = max(arr[i],(arr[i]+current_max_sum));
        if(current_max_sum<0)
            current_max_sum = 0;
        if(max_sum<current_max_sum)
            max_sum = current_max_sum;
    }
    cout<<max_sum;
}

lli main(){
    lli arr[100],n;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;
    //input array
    cout<<"Enter elements : ";
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    //calling kadanes algorithm
    kadanes_algorithm(arr,n);
    
    return 0;
}
