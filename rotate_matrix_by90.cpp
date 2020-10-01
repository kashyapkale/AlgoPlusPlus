#include<iostream>
#include<algorithm>
#define max 100
using namespace std;


//swap function
void myswap(lli *a,lli *b){
    lli temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//fun accept 2d array
void input_array(lli arr[][max],lli row,lli col){
    for(lli i = 0;i<row;i++){
        for(lli j = 0;j<col;j++){
            cout<<"Enter element for Row : "<<i<<" and Column : "<<j<<" => ";
            cin>>arr[i][j];
            cout<<endl;
        } 
    }
}

//fun display 2d array
void display_array(lli arr[][max],lli row,lli col){
    for(lli i = 0;i<row;i++){
        for(lli j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
}


void reverse_rows(lli arr[][max],lli row,lli col){
    lli k,l;
    for(lli i = 0;i<row;i++){
        k=0;
        l=col-1;
        while(k<l){
            myswap(&arr[i][k],&arr[i][l]);
            k++;
            l--;    
        }
        cout<<endl;
    }
}

void transpose(lli arr[][max],lli row,lli col){
    //lli arr2[max][max];
    for(lli i = 0;i<row;i++){
        for(lli j = 0;j<col;j++){
            cout<<arr[j][i]<<" ";
        } 
        cout<<endl;
    }
    //display_array(arr2,row,col);    
}


//fun to rotate the array by 90deg
void rotate_array(lli arr[][max],lli row,lli col){

cout<<"Rotating the Array by 90 deg";

//step1 : reverse the rows of the array
reverse_rows(arr,row,col);

//step2 : form the transpose of the reversed array
transpose(arr,row,col);

}

lli main(){
    lli arr[max][max];
    lli row,col;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of columns : ";
    cin>>col;
    input_array(arr,row,col);
    cout<<"original Array"<<endl;
    display_array(arr,row,col);
    cout<<endl;
    cout<<"Rotated Array"<<endl;
    rotate_array(arr,row,col);
}