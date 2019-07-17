#include<iostream>
using namespace std;
int  main()
{
	
	int i=0;
	char octnum[1000];
	cout<<"Enter any Octal Number : ";
	cin>>octnum;
	cout<<"Equivalent Binary Value = ";
	while(octnum[i])
	{
		switch(octnum[i])
		{
			case '0' : cout<<"000";
				break;
			case '1' : cout<<"001";
				break;
			case '2' : cout<<"010";
				break;
			case '3' : cout<<"011";
				break;
			case '4' : cout<<"100";
				break;
			case '5' : cout<<"101";
				break;
			case '6' : cout<<"110";
				break;
			case '7' : cout<<"111";
				break;
			default : cout<<"\nInvalid Octal Digit "<<octnum[i];
				break;
	}
	return 0;
}
