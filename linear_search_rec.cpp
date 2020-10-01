//linear search to find first occurance of an element in an array using recursion
#include<iostream>
#include<vector>
using namespace std;

//approach one
lli search(lli *a , lli N , lli key){
    if(N==0){
        return -1;
    }

    if(a[0]==key){
        return 0;
    }
    lli index = search(a+1,N-1,key);
    if(index==-1){
        return -1;
    }
    return index+1;
}

//approach 2
lli search_second(lli *a , lli N , lli i , lli key){
if(i==N){
    return -1;
}

if(a[i]==key){
    return i;
}

return search_second(a,N,i+1,key);

}


lli main(){
    lli arr[] = {9,3,4,1,8,5,3,6,12,11,3,8};
    lli key = 11;
    cout<<search(arr,12,key)<<endl;
    cout<<search_second(arr,12,0,key)<<endl; 
}