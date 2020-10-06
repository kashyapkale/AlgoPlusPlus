/*We are given a circular array, print the next 
greater number for every element. 
If it is not found print -1 for that number. 
To find the next greater number for element Ai ,
start from index i + 1 and go uptil the last 
index after which we start looking for the greater
 number from the starting index of the 
 array since array is circular. */

#include<iostream>
#include<vector>
#define lli long long
#include<stack>
using namespace std;

void solve(lli N,vector<lli> &v){
    lli freq_arr[v.size()] = {-1};
    stack<lli> s;                           
    s.push(0);
    for(lli i=1;i<v.size();i++){
        if (s.empty()) { 
            s.push(i); 
            continue; 
        }
        
        if(v[i]>v[s.top()]){
           while(!s.empty() && (v[i]>v[s.top()]) ){
               freq_arr[s.top()] = v[i];
               s.pop();
           }
           s.push(i);
       }
       else
            s.push(i);
            
    }
    lli index = 0;
    while(!s.empty()){
			   index = 0;
			   while(index < s.top()){
				   if(v[index]>v[s.top()]){
					   freq_arr[s.top()] = v[index];
					   s.pop();
					   break;
				   }
				   index++;
			   }
			   if(index>=s.top()){
					   freq_arr[s.top()] = -1;
					   s.pop();
				   }
           }
    
    for(lli j=0;j<v.size();j++){
        cout<<freq_arr[j]<<" ";
    }
}


int main() {
    lli T,N,temp;
        vector<lli> v;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>temp;
            v.push_back(temp);
        }
        solve(N,v);
        cout<<endl;
    
	return 0;
}