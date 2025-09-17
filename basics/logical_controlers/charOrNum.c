#include <stdio.h>
int main() 
{
	char ch ;
	printf("Enter a char:\n");
	scanf("%c",&ch);

	if(ch >=48 && ch <= 57)
	printf("Entered char is a digit\n");
	else if(ch >= 'A' && ch <= 'Z')
	printf("Entered char is a Uppercase alphabet\n");
	else if(ch >= 'a' && ch <= 'z')
	printf("Entered char is a Lowercase alphabet\n");
	else
	printf("Entered char is a symbol\n");
	return 0;
}
		
