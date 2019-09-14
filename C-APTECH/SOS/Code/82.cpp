#include<stdio.h>
main()
{
	int ary[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n%d\tary[%d]=%d\t*(ary+%d)=%d",i,i,ary[i],i,*(ary+i));
		printf("\t&ary[%d]=%x\tary+%d =%x",i,&ary[i],i,ary+i);
	}
	printf("\n");
}
