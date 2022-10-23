#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	stack<int> s;
	int arr[]={1,3,0,0,1,2,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=n-1;i>=0;i--){
		if(s.empty()==1){
			v.push_back(-1);
		}
		else if(s.empty()==0 && s.top()>arr[i]){
			v.push_back(s.top());
		}
		else if(s.empty()==0 && s.top()<=arr[i]){
			while(s.empty()==0 && s.top()<=arr[i]){
				s.pop();
			}
			if(s.empty()==1) v.push_back(-1);
			else{
				v.push_back(s.top());
			}
		}
		s.push(arr[i]);
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<" "<<v[i];
	}
	return 0;
}
