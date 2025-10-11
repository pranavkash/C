//stderr is unbuffered
#include<stdio.h>
#include<unistd.h>

int main(){
	while(1){
        fprintf(stderr,"Ihave");//unbeffered 
		fprintf(stdout,"Power");//buffered, so fulshed when full
		usleep(100000); //usleep is microsec ;
	}

	return 0;
}