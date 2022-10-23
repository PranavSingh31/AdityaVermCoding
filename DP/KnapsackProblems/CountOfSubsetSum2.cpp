//bottom-up approach
#include<bits/stdc++.h>
using namespace std;

int subset(int arr[], int s,int n){
//initializing dp table
int dp[n+1][s+1];
memset(dp,-1,sizeof(dp));

//base condition
for(int i=0;i<n+1;i++){
    for(int j=0;j<s+1;j++){
        if(j==0) dp[i][j]=1;
        else if(i==0 && j!=0) dp[i][j]=0;
        else{
            if(arr[i-1]<=j) dp[i][j]= (dp[i-1][j-arr[i-1]] + dp[i-1][j]);
            if(arr[i-1]>j) dp[i][j]=dp[i-1][j];
        }
    }
}
return dp[n][s];
}
int main(){
    int arr[]={2,3,7,8,10};
    int w=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<subset(arr,w,n);
    return 0;
}