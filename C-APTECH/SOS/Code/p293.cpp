#include<stdio.h>
#include<string.h>
main()
{
	char str_arr[5][20];
	char str[20];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("\nEnter a string str_arr[%d] :",i);
		scanf("%s",str_arr[i]);
	}
	for(i=0;i<4;i++)//Muc dich lay arr1 so vs arr2 tim strMax
	{
		for(j=i+1;j<5;j++)
		{
			if( strlen(str_arr[i]) < strlen(str_arr[j]) )//neu str2 lon hon str1 thi str2Max
			{
				strcpy(str,str_arr[i]);//str la phu de luu strI 
				strcpy(str_arr[i],str_arr[j]);
				strcpy(str_arr[j],str);
			}
		}
	}
		
	printf("\nThe string is in order descending of legth are : ");
	for(i=0;i<5;i++)
	{
		printf("\n%s",str_arr[i]);
	}
	printf("\n");
}
