#include<iostream>
#include<vector>
#include<utility>
#define lli long long
using namespace std;

lli solve(vector<lli> &v){
    pair<lli,lli> p[v.size()+1];
    lli index,max_elem=-1000;
    for(unsigned lli i=1;i<=1000;i++){
        
        //v[i]>0?(index =v[i]):(index=v[i]*-1); 

        p[i].first = 0;
        p[i].second = 0;
    }
    /*for(lli i=0;i<v.size();i++){
        v[i]>0?(index =v[i]):(index=v[i]*-1);
        cout<<p[index].first<<" "<<p[index].second<<endl;
    }*/
    for(unsigned lli i=0;i<v.size();i++){
        
        v[i]>0?(index =v[i]):(index=v[i]*-1);
        if(index>max_elem)
            max_elem=index; 
        v[i]>0?(p[index].first++):(p[index].second++);
    }
    for(lli i=1;i<=max_elem;i++){
        //v[i]>0?(index =v[i]):(index=v[i]*-1);
        index = i;
        cout<<"index : "<<index<<":"<<p[index].first<<" "<<p[index].second<<endl;
    }
    for(lli j = max_elem;j>0;j--){
        if(p[j].first>0 && p[j].second>0)
            return j;
    }
    return -1;

}


lli main() {
    lli T,temp;
    cin>>T;
    vector<lli> v;
    while(T--){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<solve(v);
	return 0;
}