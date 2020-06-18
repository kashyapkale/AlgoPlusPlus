#include<iostream>
#include <unordered_map> 
using namespace std;
int main() {
	int max_val = -100;
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	unordered_map<char, int> umap;
	for(int i=0;i<26;i++){
		umap[letters[i]]=0;
	} 
	string s;
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		umap[s[i]]++;
	} 
	int index;
	for(int i=0;i<26;i++){
		if (max_val < (umap[letters[i]]) ){
			max_val = umap[letters[i]];
			index = i;}
	} 
	cout<<letters[index];
	return 0;
}