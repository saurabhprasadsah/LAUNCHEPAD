#include<iostream>
using namespace std;


class linkedlist{
public:
	node* head;
	node* tail;
	
	
};
linkedlist BSTtoll(node* root){
	linkedlist l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}
	
	if(root->left!=NULL && root->right==NULL){
		linkedlist left=BSTtoll(root->left);
		
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
		
	}
	else if(root->left==NULL && root->right!=NULL){
		linkedlist right=BSTtool(root->right);
		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}
	else if(root->right==NULL && root->left==NULL){
		l.head=l.tail=root;
		return l;
	}
	else{
		linkedlist left=BSTtool(root->left){
			
		}
	}
	
}




















int main(){
	
	
	return 0;
}
