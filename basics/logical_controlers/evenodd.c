#include <stdio.h>
int main() 
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num > 0){
		if(num%2 ==0){
			printf("Even\n");
		}
	else{
		printf("Odd\n");
	}
	}
	else{
		printf("invalid input\n");
	}
	return 0;
}
