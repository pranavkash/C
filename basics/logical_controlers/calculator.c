#include <stdio.h>
int main()
{

	char choice;
	float a,b,res;

	printf("select a choice:\n1) Addition\n2)Subtraction\n3)Multiplication\n4)Division\n");
	printf("Enter choice + - * /");
	scanf(" %c",&choice);
	printf("Enter the 2 number: ");
	scanf("%f %f",&a,&b);
	switch(choice){
	case '+':{
			res=a+b;
			break;}
	case '-':{
		       res=a-b;
			break;
	       }
	case '*':{
		       res=a*b;
			break;
	       }
	case '/':{
		       res=a/b;
		       break;
	       }
	default: {printf("invalid option\n");
			 return 0;
		 }
	}


	printf("result is = %g\n",res);
	return 0;
}
