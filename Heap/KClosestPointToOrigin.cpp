#include<bits/stdc++.h>
#include<queue>
#include<vector>
#include<cmath>
#define pii pair<int,int>
#define pfp pair<float, pair<int,int> >
using namespace std;
int main(){
	int k=2;
	vector<pii> a={{2,3},{-2,2},{5,8},{0,1}};
	int n = a.size();
	priority_queue<pfp> maxh;
	for(auto it:a){
	    float d = sqrt(pow(it.first,2)+pow(it.second,2));
	    maxh.push(make_pair(d,make_pair(it.first,it.second)));
	    if(maxh.size()>k) maxh.pop();
	}
	while(!maxh.empty()){
	    cout<<"("<<maxh.top().second.first<<"," <<maxh.top().second.second<<"),";
	    maxh.pop();
	}
	return 0;
}
