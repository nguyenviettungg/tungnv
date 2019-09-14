#include<stdio.h>
main()
{
	struct cat
	{
		char bk_name[25];
		char author[20];
		int edn;
		float price;	
	}books1,books2;
	struct emmployee
	{
		int no;
		char name[15];	
	};
		
	struct issue
	{
		char name[20];
		char dos[15];
		struct cat books;
	}issue1;
	
	_flushall();
	printf("\nEnter a borrower's name: ");
	gets(issue1.name);
	_flushall();
	printf("\nEnter a date of issue: ");
	scanf("%s",issue1.dos);
	_flushall();
	printf("\nEnter a book name: ");
	gets(issue1.books.bk_name);
	_flushall();
	printf("\nEnter an author: ");
	gets(issue1.books.author);
	_flushall();
	printf("\nEnter an edition: ");
	scanf("%d",&issue1.books.edn);
	_flushall();
	printf("\nEnter a price: ");
	scanf("%f",&issue1.books.price);
	
	printf("\n\nthe imformation of Issue");
	printf("\nThe issue name: %s",issue1.name);
	printf("\nThe date of issue: %s",issue1.dos);
	printf("\nThe book Name: %s\tAuthor: %s\t\t Edition: %d\t\tPrice: %.2f\n",
	issue1.books.bk_name,issue1.books.author,issue1.books.edn,issue1.books.price);

}
