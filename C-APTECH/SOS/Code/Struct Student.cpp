#include<stdio.h>
#include<stdlib.h>//Lam menu exit(0)
struct sv_st
{
	int masv;
	char tensv[20];
	int diemsv;	
};
int i,size;
main()
{
	printf("\nEnter a size of array: ");
	scanf("%d",&size);
	struct sv_st arrsv[size];
	void nhapDiem(struct sv_st arrsv[]);
	void inCaNhan(struct sv_st arrsv[]);
	void inBang(struct sv_st arrsv[]);
	
	int opt;
	while(true)
	{
		printf("\n1.Enter student's mark ");
		printf("\n2.Print student's code ");
		printf("\n3.Printf all student ");
		printf("\n4.Exit ");
		printf("\n\nEnter an option ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				nhapDiem(arrsv);
				break;
			case 2:
				inCaNhan(arrsv);
				break;
			case 3:
				inBang(arrsv);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Error.Pls re-enter.");
		}
				
	}
}
void nhapDiem(struct sv_st arrsv[])
{
	for(i=0;i<size;i++)
	{
		printf("\nEnter information for student %d: ",(i+1));
		printf("\nEnter student's code: ");
		scanf("%d",&arrsv[i].masv);
		_flushall();
		printf("\n\tEnter student's name: ");
		gets(arrsv[i].tensv);
		printf("\n\tEnter student's mark: ");
		scanf("%d",&arrsv[i].diemsv);
	}
}
void inCaNhan(struct sv_st arrsv[])
{
	int ma;
	printf("\nEnter student's finding code: ");
	scanf("%d",&ma);
	char check ='n';
	for(i=0;i<size;i++)
	{
		if(arrsv[i].masv==ma)
		{
			check = 'y';
			printf("\nStudent's code: %d\tStudent's name: %s\tStudent's mark: %d\n ",arrsv[i].masv,arrsv[i].tensv,arrsv[i].diemsv);
			break;
		}
	}
	if(check =='n'||check=='N')
	{
		printf("\nInvalid");
	}
}
void inBang(struct sv_st arrsv[])
{
	struct sv_st arrvs[size];
	for(i=0;i<size;i++)
	{
		arrvs[i]=arrsv[i];
	}
	
	struct sv_st sv;//bien tam thoi de luu 1 cau truc sv
	
	for(i=0;i<(size-1);i++)//i-->size-1;j-->size
	{
		for(int j=(i+1);j<size;j++)
		{
			if(arrvs[i].diemsv<arrvs[j].diemsv)
			{
				sv=arrvs[i];
				arrvs[i]=arrvs[j];
				arrvs[j]=sv;
			}
		}
	}
	//In bang thong tin sv theo thu tu giam dan
	printf("\n\t\tStudent's information:");
	printf("\n\tStudent's code\tStudent's name\tStudent's mark: ");
	
	for(i=0;i<size;i++)
	{
		printf("\n\t\t %d \t\t %s \t\t %d ",arrvs[i].masv,arrvs[i].tensv,arrvs[i].diemsv);
	}
	printf("\n");
}
