#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void upperCase(char st[])
{
	strupr(st);
	printf("\nUpper Case:");
	puts(st);
}
int main(int argc, char** argv) {
	char st[100];
	printf("\nEnter string:");
	gets(st);
	upperCase(st);
		
	
	
	
	
	
	return 0;
}
