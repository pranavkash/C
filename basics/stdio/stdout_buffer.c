#include<stdio.h>
#include<unistd.h>

// stdout buffer flushing reasons
//buffer not fulshing case:
//  int main() {
// 	 printf("hello");// this doesnt print bcz no buffer flush is happening.add \n & will cause a flush so it prints.
// 	 while(1);
// 	 return 0;
//  }

 // autto flushing when buffer full, wait till buffer full and prints complete buffer content.
/* int main(){
	while(1){
		printf("IhavePower");
		usleep(100000); //usleep is microsec ;
	}

	return 0;
} */

int main(){
	printf("I\r");
	fflush(stdout);sleep(1);
	printf("Ih\r");
	fflush(stdout);sleep(1);
	printf("Iha\r");
	fflush(stdout);sleep(1);
	printf("Ihav\r");
	fflush(stdout);sleep(1);
	printf("Ihave\r");
	fflush(stdout);sleep(1);
	printf("IhaveP\r");
	fflush(stdout);sleep(1);
	printf("IhavePo\r");
	fflush(stdout);sleep(1);
	printf("IhavePow\r");
	fflush(stdout);sleep(1);
	printf("IhavePowe\r");
	fflush(stdout);sleep(1);
	printf("IhavePower\r");
	fflush(stdout);sleep(1);
	printf("IhavePower!\r");
	fflush(stdout);sleep(1);
	printf("IhavePower!!\r");
	fflush(stdout);sleep(1);
	printf("IhavePower!!!");
	fflush(stdout);sleep(1);

	printf("\n");
	return 0;
}