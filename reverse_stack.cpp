//Reverse a Stack using RECURSION
#include<iostream>
#include<vector>
#include<stack>
#define lli long long
using namespace std;

void insertAtBottom(stack<lli> &s,lli N){
	if(s.empty()){
		s.push(N);
		return;
	}

	lli temp = s.top();
	s.pop();
	insertAtBottom(s,N);
	s.push(temp);
	return;

}


void reverse(stack<lli> &s){
	if(s.empty()){
		return;
	}
	lli temp = s.top();
	s.pop();
	reverse(s);
	insertAtBottom(s,temp);
	return;
}

int main() {
    lli T;
    cin>>T;
	stack<lli> s;
	lli temp;
    while(T--){
		cin>>temp;
		s.push(temp);
    }
	reverse(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}