#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	vector<int> a = {1,2,3,4,5};
	priority_queue<int,vector<int>,greater<int> > minh;
	int cost=0,n=a.size();
	for(int i=0;i<n;i++){
	    minh.push(a[i]);
	}
	while(minh.size()>=2){
	    int first = minh.top();
	    minh.pop();
	    int second = minh.top();
	    minh.pop();
	    minh.push(first+second);
	    cost=cost+first+second;
	}
	cout<<cost;
	return 0;
}
