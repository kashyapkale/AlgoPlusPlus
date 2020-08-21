#include<iostream>
#include<vector>
#include<utility>
#define lli long long
using namespace std;

int solve(vector<int> &v){
    pair<int,int> p[v.size()+1];
    int index,max_elem=-1000;
    for(unsigned int i=1;i<=1000;i++){
        
        //v[i]>0?(index =v[i]):(index=v[i]*-1); 

        p[i].first = 0;
        p[i].second = 0;
    }
    /*for(int i=0;i<v.size();i++){
        v[i]>0?(index =v[i]):(index=v[i]*-1);
        cout<<p[index].first<<" "<<p[index].second<<endl;
    }*/
    for(unsigned int i=0;i<v.size();i++){
        
        v[i]>0?(index =v[i]):(index=v[i]*-1);
        if(index>max_elem)
            max_elem=index; 
        v[i]>0?(p[index].first++):(p[index].second++);
    }
    for(int i=1;i<=max_elem;i++){
        //v[i]>0?(index =v[i]):(index=v[i]*-1);
        index = i;
        cout<<"index : "<<index<<":"<<p[index].first<<" "<<p[index].second<<endl;
    }
    for(int j = max_elem;j>0;j--){
        if(p[j].first>0 && p[j].second>0)
            return j;
    }
    return -1;

}


int main() {
    int T,temp;
    cin>>T;
    vector<int> v;
    while(T--){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<solve(v);
	return 0;
}