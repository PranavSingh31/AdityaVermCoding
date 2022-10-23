#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<stack>
using namespace std;

int main(){
	int arr[]={100,80,60,70,60,75,85};
	
	stack<pair <int,int> > s;
	vector<int> v;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		if(s.empty()==1){
			v.push_back(-1);
		} 
		else if(s.empty()==0 && s.top().first >= arr[i]){
			v.push_back(s.top().second);
		}
		else if(s.empty()==0 && s.top().first < arr[i]){
			while(s.top().first < arr[i] && s.empty()==0){
				s.pop();
			}
			if(s.empty()==1){
				v.push_back(-1);
			}
			else{
				v.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	
	for(int i=0;i<n;i++){
		v[i]=i-v[i];
		cout<<v[i]<<" ";
	}
	return 0;
}
