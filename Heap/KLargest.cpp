#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n=6,k=3;
	int a[n]={7,10,4,3,20,15};
	priority_queue <int,vector<int>,greater<int> > minh;
	for(int i=0;i<n;i++){
		minh.push(a[i]);
		if(minh.size()>k) minh.pop();
	}
	while(minh.size()>0){
		cout<<minh.top()<<" ";
		minh.pop();
	}
	return 0;
}

