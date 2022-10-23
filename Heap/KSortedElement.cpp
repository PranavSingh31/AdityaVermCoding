//also known as nearly sorted array question
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n=7,k=3,j=0;
	int a[n]={6,5,4,2,8,10,9};
	priority_queue <int,vector<int>,greater<int> > minh;
	for(int i=0;i<n;i++){
		minh.push(a[i]);
		if(minh.size()>k){
			a[j]=minh.top();
			minh.pop();
			j++;
		}
	}
	while(minh.size()>0){
		a[j]=minh.top();
		minh.pop();
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

