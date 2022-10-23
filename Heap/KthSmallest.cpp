#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n=6,k=3;
	int a[n]={7,10,4,3,20,15};
	priority_queue <int> maxh;
	for(int i=0;i<n;i++){
		maxh.push(a[i]);
		if(maxh.size()>k) maxh.pop();
	}
	cout<<maxh.top();
	return 0;
}

