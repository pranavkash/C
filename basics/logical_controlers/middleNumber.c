#include <stdio.h>
int main () {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);


	// if((a>b && a<c) || (a>c && a<b)){
	//     printf("the number %d is the middle one",a);
	// }else if(b>a && b<c || b<a && b>c){
	//     printf("the number %d is the middle one",b);
	// }else if(c>a && c<b || c<a && c>b){
	//     printf("the number %d is the middle one",c);
	// }else{
	//     printf("there is no middle number");
	// }
	// return 0;
	// ------------arithmatic solution--------------
	// int min(int a, int b){return a<b?a:b; };
	// int max(int a,int b){return a>b?a:b; };
	// int small=min(a,min(b,c));
	// int big=max(a,max(b,c));

	// int sum=a+b+c;
	// int mid=(sum-small)-big;
	// printf("the number %d is the middle one",mid);

	//------------if else solution--------- a b c
	if(a>b){
		if(a<c){
			printf("the number %d is the middle one",a);
		}else
			printf("the number %d is the middle one",b);
	}else if(a<b){
		if(a>c)
			printf("the number %d is the middle one",a);
    else
			printf("the number %d is the middle one",c);
	}else if(b>a){
		if(b<c)
			printf("the number %d is the middle one",b);
    else
			printf("the number %d is the middle one",c);
	}else if(b>c){
			printf("the number %d is the middle one",b);
	}else if(c>a){
		if(c<b)
			printf("the number %d is the middle one",c);
	}else if(c<a){
		if(c>b)
			printf("the number %d is the middle one",c);
	}

			printf("invaild situation");

      acb

      a>b
        a<c
        a
        c
      b>a
      b<c
        b
        c
      

      

}
