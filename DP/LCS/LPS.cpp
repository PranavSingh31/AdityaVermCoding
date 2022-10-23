#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int LCS(string x,string y,int n,int m){
	int t[n+1][m+1];
	memset(t,-1,sizeof(t));
	if(n==0||m==0) return 0;
	if(t[n][m]!=-1) return t[n][m];
	else{
		if(x[n-1]==y[m-1]) return t[n][m]=1+LCS(x,y,n-1,m-1);
		else t[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
	}
	return t[n][m];
}
int main(){
	string x="abcddhbcbavcr";
	int n= x.size();
	string y=x;
	reverse(y.begin(),y.end());
	cout<<LCS(x,y,n,n);
	return 0;
}
