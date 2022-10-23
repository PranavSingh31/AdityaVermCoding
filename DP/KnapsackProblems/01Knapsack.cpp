//top-down approach
#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int w,int n){
//initializing dp table
int dp[n+1][w+1];
memset(dp,-1,sizeof(dp));

//base condition
if(n==0 || w==0) return 0;

//return value recursion
if(dp[n][w]!=-1) return dp[n][w];

//branch condition
if(wt[n-1]<=w) return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
if(wt[n-1]>=w) return dp[n][w] = knapsack(wt,val,w,n-1);

return dp[n][w];
}

int main(){
    int wt[]={10,20,30};
    int val[]={60,100,120};
    int w=50;
    int n=sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(wt,val,w,n);
    return 0;
}