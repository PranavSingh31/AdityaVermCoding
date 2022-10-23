#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int maxl[n],maxr[n],water[n];
	maxl[0]=arr[0];
	maxr[n-1]=arr[n-1];
	for(int i=1;i<n;i++){
		maxl[i]=max(maxl[i-1],arr[i]);
	}
	for(int i=n-2;i>=0;i--){
		maxr[i]=max(maxr[i+1],arr[i]);
	}
	int m = 0;
	for(int i=0;i<n;i++){
		water[i]=min(maxl[i],maxr[i])-arr[i];
		m = m + water[i];
	}
	cout<<m;
}
