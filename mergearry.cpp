#include<iostream>
using namespace std;


void merge (int a[],int n,int b[],int m){
	
	int i=n-1;
	int j=m-1;
	int k=m+n-1;
	
	while (i>=0 && j>=0){
		if(a[i]>b[j])
		{a[k]=a[i];
		k--;
		i--;
		}
		else{a[k]=b[j];
		k--;
		j--;
		
		}
	}
	
}


   if


int main()
{
	int a[]={1,3,5,7,8,9};
	int b[]={2,4,6,10};
	int  n=sizeof(a)/sizeof(int);
    int  n=sizeof(b)/sizeof(int);
	
	merge(a,6,b,6)
	for(int i=0; i<)
	
}
