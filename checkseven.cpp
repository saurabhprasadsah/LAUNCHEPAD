#include<iostream>
using namespace std;
bool checkseven(int *a,int n, int i){
	if(i==n){
		return false;
	}
	
	if(a[i]==7){
		return true;
	}
	bool kyachotemeihai=checkseven(a,n,i+1);
	return  kyachotemeihai;
	
}

int main()

{
	int a[]={1,2,3,4,5,6,7,8,3,3};
	int n=sizeof(a)/sizeof(int);
	if(checkseven(a,n,0))
	{
		cout<<"yes";
		
	}
	else
	
	{ 
	cout<<"no";
	}
	
}

