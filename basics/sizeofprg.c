#include <stdio.h>
int main() 
{
	int x;
	char c;
	float f;
	double d;
	int ax = 255;
	printf("..................\n");
	printf("Size of int: %zu\n",sizeof(int));
	printf("Size of char: %zu\n",sizeof(c));
	printf("Size of float: %zu\n",sizeof f);
	printf("Size of double: %zu\n",sizeof d);
	printf("octal - %o\n",ax);
	printf("hexa lower - %x\n",ax);
	printf("hexa upper - %X\n",ax);	
	printf("hexa upper rep - %#X\n",ax);	
	printf("octal rep - %#o\n",ax);	
		
	return 0;
}

