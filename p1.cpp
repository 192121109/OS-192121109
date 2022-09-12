#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fptr1,*fptr2;
	char f[200],c;
	printf("enter the file name for reading:");
	scanf("%s",f);
	fptr1=fopen(f,"r");
	if(fptr1==NULL)
	{
		printf("cannot open file %s ",f);
		exit(0);
	}
	printf("enter the file name for writing:");
	scanf("%s",f);
	fptr2=fopen(f,"w");
	if(fptr2==NULL)
	{
		printf("cannot open a file %s",f);
		exit(0);
	}
	c=fgetc(fptr1);
	while(c!=EOF)
	{
		fputc(c,fptr2);
		c=fgetc(fptr1);
	}
	printf("content copy to %s",f);
	fclose(fptr1);
	fclose(fptr2);
}
