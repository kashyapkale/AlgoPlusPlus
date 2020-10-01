#include<iostream>
#include<vector>
#define MAX 5
#define lli long long
using namespace std;

class stack{
    lli arr[MAX];
    lli top = -1;
    public:
    stack(){
        for(lli i = 0;i<MAX;i++){
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

    lli Top(){
        if(!isEmpty()){
            return top;
        }
        else
            cout<<"Stack is Empty"<<endl;
    }
    
    void push(lli data){
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
            for(lli i=top;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
        else
            cout<<"Stack is Empty"<<endl;
        
    }
    


};


lli main() {
    lli T;
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