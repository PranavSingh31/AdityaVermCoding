#include<bits/stdc++.h>
#include<stack>
#include<utility>
#include<vector>

using namespace std;

int main(){
	int arr[]={6,2,5,4,5,1,6};
	
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
	
	vector<int> area;
	
	for(int i=0;i<n;i++){
		cout<<(rs[i]-ls[i]-1)*arr[i]<<" ";
		m = max(m,(rs[i]-ls[i]-1)*arr[i]);
	}
	cout<<endl<<m;
	
}
