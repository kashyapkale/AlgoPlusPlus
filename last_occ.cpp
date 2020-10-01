//linear search to find last occurance of an element in an array using recursion
#include<iostream>
#include<vector>
using namespace std;

//approach 
lli search(lli *a , lli N , lli i , lli key){

if(a[i]==key){
    return i;
}

if(i==0){
    return -1;
}

return search(a,N,i-1,key);

}


lli main(){
    lli arr[] = {9,3,4,1,8,5,3,6,12,11,3,8};
    lli key = 3;
    //cout<<search(arr,12,key)<<endl;
    cout<<search(arr,12,11,key)<<endl; 
}