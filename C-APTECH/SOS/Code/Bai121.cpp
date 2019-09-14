#include<Stdio.h>
main()
{
	struct cat
	{
		char bk_name[25];
		char author[20];
		int edn;
		float price;
	}
	books2;
	
	struct employee
	{
		int no;
		char name[15];
	};
	struct employee emp1,emp2;
	struct employee emp3={1232,"Binh"};
	struct employee emp4;
	
	struct cat books1 ={"Quyen so 1","Tac gia 1",1,120};//gan truc tiep ghi day du ra
	_flushall();
	printf("\nEnter a book name: ");
	gets(books2.bk_name);
	printf("\nEnter an authour: ");
	gets(books2.author);
	printf("\nEnter an edition: ");
	scanf("%d",&books2.edn);
	printf("\nEnter a price:");
	scanf("&f",&books2.price);
}
