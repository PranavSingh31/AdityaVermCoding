#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define pii pair<int,int>
#include<map>
using namespace std;
int main(){
	vector<int> a={1,1,1,3,2,2,4};
	int n = a.size();
	map<int,int> mp;
	priority_queue <pii> maxh;
	for(auto it:a){
		mp[it]++;
	}
	for(auto it1 : mp) maxh.push(make_pair(it1.second,it1.first));
	
    while(!maxh.empty()){
        int j=maxh.top().first;
        while(j--){
		cout<< maxh.top().second;
        }
        maxh.pop();
    }
}
