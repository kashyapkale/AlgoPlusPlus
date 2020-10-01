#include<iostream>
#include<algorithm>
#define max 100
using namespace std;

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

void spiral_waves(lli arr[][max],lli row,lli col){
   
    for(lli j = 0;j<col;j++){
        if(j%2==0){
            for(lli i = 0; i<row ; i++){
                cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(lli i = row-1; i>=0 ; i--){
                cout<<arr[i][j]<<" ";
        }
        }
         
    }

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
    spiral_waves(arr,row,col);
}