#include<stdio.h>
main()
{
	FILE  * fp;
	char = ch;
	
	fp=fopen("my.c","r");
	if(fp==NULL)
	{
		puts("file does not open");
	}
	else
	{
		while(1)
		{
			ch=fgetc(fp);
			if(ch==Eof)
			break;
			printf("%c",ch);
			
		}
		fclose(fp);
	}
	return 0;
}

