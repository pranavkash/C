#include <stdio.h>

void foo(void){
	printf("sadfs");
}

int main()
{
    char ret;
	ret = printf("%*c\r",5,'#');
	printf("%d\n",ret);
	return 0;
}

//output is 6   #