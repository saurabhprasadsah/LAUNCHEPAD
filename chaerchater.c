#include<stdio.h>
#include<conio.h>
 main()
{
	char str[100],ch;
	int c=0,l=0;
	puts("Enter string");
	gets(str);
	puts("enter character to count the occurence");
	scanf("%c",&ch);
	while(str[l]!='\0')
	{
		if(str[l]==ch)
		{ c++;
		}
		l++;
		
	}
	printf("\n \n %c appears %d times",ch,c);
	getch();
}
