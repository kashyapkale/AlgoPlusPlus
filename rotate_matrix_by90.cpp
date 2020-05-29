#include<iostream>
#include<algorithm>
#define max 100
using namespace std;


//swap function
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//fun accept 2d array
void input_array(int arr[][max],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<"Enter element for Row : "<<i<<" and Column : "<<j<<" => ";
            cin>>arr[i][j];
            cout<<endl;
        } 
    }
}

//fun display 2d array
void display_array(int arr[][max],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
}


void reverse_rows(int arr[][max],int row,int col){
    int k,l;
    for(int i = 0;i<row;i++){
        k=0;
        l=col-1;
        while(k!=l){
            swap(arr[i][k],arr[i][l]);
            k++;
            l--;    
        }
        cout<<endl;
    }
}

void transpose(int arr[][max],int row,int col){
    int arr2[max][max];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            arr2[j][i]=arr[i][j];
        } 
    }
    display_array(arr2,row,col);    
}


//fun to rotate the array by 90deg
void rotate_array(int arr[][max],int row,int col){

cout<<"Rotating the Array by 90 deg";

//step1 : reverse the rows of the array
reverse_rows(arr,row,col);

//step2 : form the transpose of the reversed array
transpose(arr,row,col);

}

int main(){
    int arr[max][max];
    int row,col;
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