#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b){
		if(a>c){
			printf("the number %d is the greatest",a);
		}
	}else if(b>c){
			printf("the number %d is the greatest",b);
	}
	else {

			printf("the number %d is the greatest",c);
	}
	return 0;
}

/*if (a>b)
	if(a>c)
	return a
else if(b>c)
	return b
else c is the gretest
*/
