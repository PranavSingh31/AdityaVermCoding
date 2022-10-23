#include<bits/stdc++.h>
#include<stack>
#include<vector>
#include<utility>
using namespace std;

int MAH(vector<int> arr){
	
	vector<int> ls,rs;
	stack< pair<int,int> > s;
	int n = sizeof(arr)/sizeof(arr[0]),m=0;
	
	for(int i=0;i<n;i++){
		if(s.empty()==1){
			ls.push_back(-1);
		}
		else if(s.empty()==0 && s.top().first < arr[i]){
			ls.push_back(s.top().second);
		}
		else if(s.empty()==0 && s.top().first >= arr[i]){
			while(s.empty()==0 && s.top().first >= arr[i]){
				s.pop();
			}
			if(s.empty()==1){
				ls.push_back(-1);
			}
			else{
				ls.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	while(!s.empty()) s.pop();
	
	for(int i=n-1;i>=0;i--){
		if(s.empty()==1){
			rs.push_back(n);
		}
		else if(s.empty()==0 && s.top().first < arr[i]){
			rs.push_back(s.top().second);
		}
		else if(s.empty()==0 && s.top().first >= arr[i]){
			while(s.empty()==0 && s.top().first >= arr[i]){
				s.pop();
			}
			if(s.empty()==1){
				rs.push_back(n);
			}
			else{
				rs.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	while(!s.empty()) s.pop();
	reverse(rs.begin(),rs.end());
	
	int mx=0;
	
	for(int i=0;i<n;i++){
		mx = max(mx,(rs[i]-ls[i]-1)*arr[i]);
	}
	return mx;
}
int main(){
	vector<vector<int>> arr
	{
		{0,1,1,0},
		{1,1,1,1},
		{1,1,1,1},
		{1,1,0,0}
	};
	vector<int> v;
	int n = arr.size();
	int m = arr[0].size();
	for(int j=0;j<m;j++){
		v.push_back(arr[0][j]);
	}
	int mx = MAH(v);
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==0){
				v[j]=0;
			}
			else{
				v[j]=v[j]+arr[i][j];
			}
		}
		mx= max(mx,MAH(v));
	}
	cout<<mx;
	return 0;
}
