#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int LCS(string x,string y,int n){
	int t[n+1][n+1];
	memset(t,-1,sizeof(t));
	if(n==0||n==0) return 0;
	if(t[n][n]!=-1) return t[n][n];
	else{
		if(x[n-1]==y[n-1]) return t[n][n]=1+LCS(x,y,n-1,n-1);
		else t[n][n]=max(LCS(x,y,n-1,n),LCS(x,y,n,n-1));
	}
	return t[n][n];
}
int main(){
	string x="abcddhbcbavcr";
	int n= x.size();
	string y=x;
	reverse(y.begin(),y.end());
	cout<<LCS(x,y,n,n);
	return 0;
}

