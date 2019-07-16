//bst
#include<iostream>
using namespace std;
class node{
	public:
		node*left;
        node*right;       	
	
	
	
};


node* InsertInBST(node* root, int data){
	if(root==NULL);{
	root=new node(data);
	return root;
	}
	if(root->data>=data){
		root->left=InsertInBST(root->left,data);
		
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}
node*BST(){
	int data;
	cin>>data;
	node* root=NULL;
	
	while(data!=-1){
		root=InsertInBST(root,data);
		cin>>data;
	
	}
	return root;
}

node* searchIBST(node* root){
	
	
}

bool isbst(node* root,int s=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}
	if(root->data<=max && root<-data>=min && isBST(root->left,min,root->data)&& isBST(root->))
	return true;
}

	
	
}

//class pair


class pair{
	public:
		int height;
		int balance;
};
pair Balanced(node* root){
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}
	pair left=Balanced(root->left);
	pair right=Balanced(root->right);
	
	
	
	p.height=max(left.height,right.height)+1
	if(left.balance && right.balance &&abs(left.height-right.height)<=1){
		p.balance=true;
	}
	else{
		p.balance=false;
	}
	return p;
}

node* ArrayBST(int *a, int s, int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node* root=new node(a [mid]);
	root->left=ArrayToBST(a,s,mid-1);
	root->right=ArrayToBST(a,mid+1,e);
	return root;
}


int main(){
	
	int a[]={1,2,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	node* root=ArrayToBST(a,0,n-1);
	preorder(root);
	Levelorder(root);

	cout<<endl;
	return 0;
}
