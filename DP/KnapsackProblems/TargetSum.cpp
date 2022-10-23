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
    int arr[]={1,1,2,3};
    int target_sum=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum=total_sum+arr[i];
    }
    int s=(target_sum+total_sum)/2;
    cout<<subset(arr,s,n);
    return 0;
}