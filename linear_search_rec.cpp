//linear search to find first occurance of an element in an array using recursion
#include<iostream>
#include<vector>
using namespace std;

//approach one
int search(int *a , int N , int key){
    if(N==0){
        return -1;
    }

    if(a[0]==key){
        return 0;
    }
    int index = search(a+1,N-1,key);
    if(index==-1){
        return -1;
    }
    return index+1;
}

//approach 2
int search_second(int *a , int N , int i , int key){
if(i==N){
    return -1;
}

if(a[i]==key){
    return i;
}

return search_second(a,N,i+1,key);

}


int main(){
    int arr[] = {9,3,4,1,8,5,3,6,12,11,3,8};
    int key = 11;
    cout<<search(arr,12,key)<<endl;
    cout<<search_second(arr,12,0,key)<<endl; 
}