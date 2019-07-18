#include<iostream>
using namespace std;
#include<conio.h>

class sample
{
	private:
		int x,y;
		public:
			void getdata(int a, int b)
			{
				x=a;
				y=b;
			}
			void showdata();
};
void sample::showdata()
{
	cout<<"value of X ="<<x<<endl;
	cout<<"value of y ="<<y<<endl;
	
}
main()
{
	sample s1;
	s1.getdata(10,20);
	s1.showdata();
	return 0;
}
