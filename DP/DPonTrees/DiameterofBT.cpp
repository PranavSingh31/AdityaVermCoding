#include<bits/stdc++.h>
using namespace std;
struct node{
	int value;
	node* left;
	node* right;
	node(int data){
		value=data;
		right=left=NULL;
	}
};

int diameter(node* root,int& res){
	if(root==NULL) return 0;
	 
	int l=diameter(root->left,res);
	int r=diameter(root->right,res);
	
	int temp = max(l,r)+1;
	int ans = max(temp,1+l+r);
	res=max(res,ans);
	
	return temp;
}
int main(){
	int res=INT_MIN;
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(8);
    diameter(root,res);
    cout<<res;
    return 0;
}
