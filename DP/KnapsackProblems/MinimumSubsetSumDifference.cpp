//top-down approach
#include<bits/stdc++.h>
using namespace std;

int MinSubSum(vector<int> vec,int s){
    int mn = INT_MAX;
    for(int i=0;i<vec.size();i++){
        mn = min(mn,s-2*vec[i]);
    }
    return mn;
}

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
if(arr[n-1]<=s) return dp[n][s] = subset(arr,s-arr[n-1],n-1) || subset(arr,s,n-1);
if(arr[n-1]>=s) return dp[n][s] = subset(arr,s,n-1);

vector<int> vec;
for(int i=0;i<s;i++){
    vec.push_back(dp[n-1][s]);
}
return MinSubSum(vec,s);
}

int partition(int arr[], int s,int n){
//initializing dp table
if(s%2!=0) return 0; 
else return subset(arr,s,n);
}

int main(){
    int arr[]={1,5,11,5};
    int w=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        w=w+arr[i];
    }
    cout<<partition(arr,w,n);
    return 0;
}