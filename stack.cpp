#include<iostream>
#include<vector>
#define MAX 5
#define lli long long
using namespace std;

class stack{
    int arr[MAX];
    int top = -1;
    public:
    stack(){
        for(int i = 0;i<MAX;i++){
            arr[i] = 0;
        }
    }

    bool isFull(){
        if(top==MAX-1)
            return true;
        else
            return false;
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }

    int Top(){
        if(!isEmpty()){
            return top;
        }
        else
            cout<<"Stack is Empty"<<endl;
    }
    
    void push(int data){
        if(!isFull()){
            top++;
            arr[top]=data;
        }
        else
            cout<<"Stack is Full"<<endl;
    }

    void pop(){
        if(!isEmpty()){
            arr[top]=0;
            top--;
        }
        else
            cout<<"Stack is Empty"<<endl;
    }

    void display(){
        if(!isEmpty()){
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
        else
            cout<<"Stack is Empty"<<endl;
        
    }
    


};


int main() {
    int T;
    cin>>T;
    stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(35);
    s.push(35);
    s.display();
    s.pop();
    s.pop();
    s.display();
	return 0;
}