#include<stdio.h>
main()
{
	// cach 1
	struct cat
	{
		char bk_name[25];
		char author[20];
		int edn;
		float price;
	};
	
	struct issue
	{
		char name[20];
		char dos[15];
		struct cat books;
	}issue1;
	
	printf("\nEnter a borrower's name: ");
	_flushall();
	scanf("%s", issue1.name);
	printf("\nEnter a date of issue: ");
	_flushall();
	scanf("%s",issue1.dos);
	_flushall();
	printf("\nEnter book name: ");
	gets(issue1.books.bk_name);
	_flushall();
	printf("\nEnter author: ");
	_flushall();
	gets(issue1.books.author);
	printf("\nEnter no. :");
	scanf("%d", &issue1.books.edn);
	printf("\nEnter price: ");
	scanf("%f", &issue1.books.price);
	
	printf("\n\nThe information of Issue");
	printf("\nThe issue name: %s", issue1.name);
	printf("\nThe date of issue: %s", issue1.dos);
	printf("\nThe book is:\n %s\t%s\t%d\t%f", issue1.books.bk_name, issue1.books.author, issue1.books.edn, issue1.books.price);
}
