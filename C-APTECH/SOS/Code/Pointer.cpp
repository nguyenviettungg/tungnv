#include<stdio.h>
main()
{
	char *pt;
	char a[3],m[3];
	for(int i=0;i<3;i++)
	{
		_flushall();
		printf("\nNhap: ");
		scanf("%c",&a[i]);	
	}
	
;
	for(int i=0;i<3;i++)
	{
	pt=&a[i]
	m[i]=*pt;
		printf("\nXuat:%c",m[i]);
	}
}
