#include<iostream>
using namespace std;

bool
bool nqueen(int board[][10],int n,int i, int j){
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<board[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	for(int j=0;j<n;j++){
		if(issafetoput(board,n,i,j)){
			board[i][j]=1;
			bool kyabaakibaatbani=nqueen(board,n,i+1);
			if(kyabaakibbatbani){
				return true;
			}
			board[i][j]=0;
		}
	}
	
}




int main(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



