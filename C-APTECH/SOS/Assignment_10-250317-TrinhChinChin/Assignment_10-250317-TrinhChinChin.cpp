#include<stdio.h>
#include<string.h>
int i,j,k,temp;
int size,year;
struct info
{
	char name[20];
	int nhietdo[5];
}citi1[5];

void MaxMin(struct info citi1[])
{
	int main(size);
	for(k=0;k<size;k++)
	{
		for(i=0;i<year-1;i++)
		{
			for(j=i+1;j<year;j++)
			{
				if(citi1[k].nhietdo[i]<citi1[k].nhietdo[j])
				{
					temp=citi1[k].nhietdo[i];
					citi1[k].nhietdo[i]=citi1[k].nhietdo[j];
					citi1[k].nhietdo[j]=temp;
				}
			}	
		}
	}
	for (int m = 0; m<size; m++)
	{
			printf("\n\tThanh pho %s: ",citi1[m].name);
			printf("\n");
			printf("\n\t\tNhiet do MAX : %d",citi1[m].nhietdo[0]);
			printf("\n");
			printf("\n\t\tNhiet do MIN : %d",citi1[m].nhietdo[year-1]);
			printf("\n");
	}
}

main()
{
	void MaxMin(struct info []);
	printf("\nNhap vao so thanh pho : ");
	scanf("%d",&size);
	printf("\nNhap vao so nam : ");
	scanf("%d",&year);
	for(i=0;i<size;i++)
	{
		_flushall();
		printf("\n\tNhap ten thanh pho %d : ",(i+1));
		gets(citi1[i].name);
		for(j=0;j<year;j++)
		{
			printf("\n\t\tNhap nhiet do trong nam %d : ", (2018-year+j));
			scanf("%d",&citi1[i].nhietdo[j]);
		}
	}
	MaxMin(citi1);	
}
