#include<bits/stdc++.h>
#include<queue>
#define pii pair<int,int>
using namespace std;
int main(){
	int k=3,x=7;
	int a[]={5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	priority_queue <pii> maxh;
	for(int i=0;i<n;i++){
		maxh.push({abs(a[i]-x),a[i]});
		if(maxh.size()>k) maxh.pop();
	}
	for(int i=0;i<k;i++){
		cout<<maxh.top().second<<" ";
		maxh.pop();
	}
	return 0;
}

