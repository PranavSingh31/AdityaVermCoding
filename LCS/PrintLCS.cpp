#include<bits/stdc++.h>
#include<string>
using namespace std;
void LCS(string x,string y,int n,int m){
	int t[n+1][m+1];
	memset(t,-1,sizeof(t));
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0||j==0) t[i][j]=0;
			else if(x[i-1]==y[j-1]) t[i][j]=1+t[i-1][j-1];
			else t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	//printing part
	int index=t[n][m];
	char s[index+1];
	s[index]="\0";
	int i=m,j=n;
	string s;
	while(i>0 && j>0){
		if(x[i-1]==y[j-1]){
			s[index-1]=x[i-1];
			i--;
			j--;
			index--
		}
		else{
			if(t[i][j-1]>t[i-1][j]) j--;
			else i--;
		}
	}
	cout<<s;
}
int main(){
	string x="abcdghavcr";
	string y="abedfhr";
	LCS(x,y,x.size(),y.size());
	return 0;
}
