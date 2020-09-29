#include<iostream>
#include<vector>
#define MAX 6
#define lli long long
using namespace std;

class queue{
    int arr[MAX];
    int rear = -1;
    int front = -1;
    public:
    queue(){
        for(int i = 0;i<MAX;i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        return (rear==front)?true:false;
    }

    bool isFull(){
        return (rear==(MAX-1))?true:false;
    }

    void enqueue(int data){
        if(rear==-1 && front==-1){
            front = rear = 0;
            arr[rear]=data;
        }
        else if(isFull()){
            cout<<"The queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
            cout<<"Enqueued"<<data<<endl;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            arr[front] = 0;
            front++;
        }
    }

    void display(){
        if(!isEmpty()){
            for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
            
        }
        else{
            cout<<"Empty"<<endl;
        }
        cout<<endl;
    }
};


int main() {
    int T;
    cin>>T;
    queue s;
    s.dequeue();
    s.enqueue(5);
    s.enqueue(15);
    s.enqueue(25);
    s.enqueue(35);
    s.enqueue(45);
    s.enqueue(45);
    s.display();
    s.dequeue();
    s.dequeue();
    s.display();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.display();
	return 0;
}