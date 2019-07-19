#include <iostream>
using namespace std; 
int main()
{
int i,j,n,s,c;
cout<<"Enter number of rows (odd number) : ";
cin>>n;
c=n/2;
for(i=1; i<=n/2+1; i++)
{
s=c;
while(s>0)
{
cout<<" ";
s--;
}
c--;
for(j=1; j<=i*2-1; j++)
{
cout<<"*";
}
cout<<endl;
}
c=1;
for(i=n/2; i>=1; i--)
{
s=c;
while(s>0)
{
cout<<" ";
s--;
}
c++;
for(j=i*2-1; j>=1; j--)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}
