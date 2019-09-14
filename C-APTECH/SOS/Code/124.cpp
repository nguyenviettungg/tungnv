#include<stdio.h>
	struct price
	{
		float priceNoCD;
		float pirceCD;
	};
	struct book
	{	
		char title[30];
		char author[20];
		struct price prc;
	};
int size;
int i;
main()
{
	printf("\nEnter a size of array: ");
	scanf("%d",&size);
	
	struct book arrN[size];
	void input(struct book[]);
	void output(struct book[]);
	input(arrN);
	output(arrN);
	printf("\n");
}
void input(struct book arrN[])
{
	for(i=0;i<size;i++)
	{
		printf("\nEnter a book %d",(i+1));
		_flushall();
		printf("\nEnter a title: ");
		gets(arrN[i].title);
		_flushall();
		printf("\nEnter an author: ");
		gets(arrN[i].author);
		printf("\nEnter price no CD: ");
		scanf("%f",arrN[i].prc.priceNoCD);
		printf("\nEnter price CD: ");
		scanf("%f",arrN[i].prc.pirceCD);
	}
}
void output(struct book arrN[])
{
		for(i=0;i<size;i++)
	{
		printf("\nEnter a book %d",(i+1));
		
		printf("\nenter a title: %s ",arrN[i].title);

		printf("\nEnter an author: %s ",arrN[i].author);

		printf("\nEnter price no CD: %f ",arrN[i].prc.priceNoCD);

		printf("\nEnter price CD: %f",&arrN[i].prc.pirceCD);
	}
}
