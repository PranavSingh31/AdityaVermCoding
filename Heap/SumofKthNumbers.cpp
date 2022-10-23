#include<bits/stdc++.h>
#include<queue>
using namespace std;
int kthnum(vector<int> &a, int k){
    int n = a.size();
    priority_queue<int> maxh;
    for(int i=0;i<n;i++){
        maxh.push(a[i]);
        if(maxh.size()>k) maxh.pop();
    }
    return maxh.top();
}
int main(){
	vector<int> a = {1,3,12,5,15,11};
	int sum = kthnum(a,3) + kthnum(a,6);
	cout<<sum;
}
