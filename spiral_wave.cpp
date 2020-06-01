#include<iostream>
#include<algorithm>
#define max 100
using namespace std;

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

void spiral_waves(int arr[][max],int row,int col){
   
    for(int j = 0;j<col;j++){
        if(j%2==0){
            for(int i = 0; i<row ; i++){
                cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i = row-1; i>=0 ; i--){
                cout<<arr[i][j]<<" ";
        }
        }
         
    }

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
    spiral_waves(arr,row,col);
}