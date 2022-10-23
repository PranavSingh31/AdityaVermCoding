//bottom-up
#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int w,int n){
//initializing dp table
int dp[n+1][w+1];
memset(dp,-1,sizeof(dp));

for(int i=0;i<n+1;i++){
    for(int j=0;j<w+1;j++){
        if(i==0 || j==0) dp[i][j]=0; //base condition
        else{ //branch condition
            if(wt[i-1]<=j) dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else if(wt[i-1]>j) dp[i][j]=dp[i-1][j];
        }
    }
}
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