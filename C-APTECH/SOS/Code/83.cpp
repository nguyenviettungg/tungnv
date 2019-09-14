#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","a+");
	if(fp==NULL)
	{
		printf("\nChua co file abc.txt");
		exit(1);
	}
	while(ch!='@')
	{
		_flushall();
		printf("\nNhap ky tu: ");
		scanf("%c",&ch);
		if(ch !='@')
		{
			fputc(ch,fp);
		}
	}
	fclose(fp);
	printf("\nGhi file xong\n\n");
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("\nKhong co file abc.txt");
		exit(1);
	}
	ch=' ';
	printf("\n");
	while(ch != EOF);
	{
		ch = fgetc(fp);
		printf("%c\t",ch);
	}
	printf("\nDoc xong file\n");
}
