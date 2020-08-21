#include<iostream>
#include<algorithm>
#define lli long long int
using namespace std;

//LinkedList Class
class node{
    public:
        int data;
        node*next;
        node(int d){
            data = d;
            next = NULL;
        }
};

//Function to insert data at the tail
void insertdata(int data,node* &head){
    node* curr=head;
    if(curr == NULL){
        head = new node(data);
    }
    else{
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = new node(data);
    }
    //return head;
}

//function to print linked list
void displayLinkedList(node* head){
    node* curr=head;
    if(curr == NULL){
        cout<<"Empty Linked List"<<endl;
    }
    else{
        while(curr->next != NULL){
            cout<<curr->data<<"->";          
            curr = curr->next;
        }
        cout<<curr->data<<endl;
    }
}


void takeInput(node* &head){
    int d;
    cin>>d;
    while(d!=-1){
        insertdata(d,head);
        cin>>d;
    }
}

ostream& operator<<(ostream &os,node* head){
    displayLinkedList(head);
    return os;
}

istream& operator>>(istream &is,node* &head){
    takeInput(head);
    return is;
}

void reverseList(node* &head){
    node* curr=head;
    node* temp;
    node* prev = NULL;
    if(curr == NULL){
        cout<<"Empty Linked List"<<endl;
    }
    else{
        while(curr->next != NULL){
           temp = curr->next;
           curr->next = prev;
           prev = curr;
           curr = temp;   
        }   
           curr->next = prev;
           head = curr;  
    }
    //return prev;
}

int main(){
    
    node* head = NULL;
    
    cin>>head;
    
    cout<<head;

    reverseList(head);

    cout<<head;

}