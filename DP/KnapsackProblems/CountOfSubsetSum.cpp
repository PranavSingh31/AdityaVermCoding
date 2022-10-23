//top-down approach
#include<bits/stdc++.h>
using namespace std;

int subset(int arr[], int s,int n){
//initializing dp table
int dp[n+1][s+1];
memset(dp,-1,sizeof(dp));

//base condition
if(s==0) return 1;
if(n==0 && s!=0) return 0;

//return value recursion
if(dp[n][s]!=-1) return dp[n][s];

//branch condition
if(arr[n-1]<=s) return dp[n][s] = subset(arr,s-arr[n-1],n-1) + subset(arr,s,n-1);
if(arr[n-1]>=s) return dp[n][s] = subset(arr,s,n-1);

return dp[n][s];
}

int main(){
    int arr[]={2,3,5,6,8,10};
    int w=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<subset(arr,w,n);
    return 0;
}