#include <stdio.h>
int main() 
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

	if(num%2)
		printf("number %d is Odd\n",num);
	else
		printf("number %d is even\n",num);
	printf("test num = %d",num+=5);
	return 0;

}
