#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define pii pair<int,int>
#include<map>
using namespace std;
int main(){
	int k=2;
	vector<int> a={1,1,1,3,2,2,4};
	int n = a.size();
	map<int,int> mp;
	priority_queue <pii, vector<pii>, greater<pii> > minh;
	for(auto it : a){
		mp[it]++;
	}
	for(auto it1 : mp){
		minh.push(make_pair(it1.second,it1.first));
		if(minh.size()>k) minh.pop();
	}
	while(!minh.empty()){
		cout<<minh.top().second<<" : times : "<<minh.top().first;
		minh.pop();
	}
	return 0;
}

