#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%.2x\n", start[i]);

	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}


int main() {
	int x = 1;
	show_int(x);


	printf("Size of int: %ld", sizeof(int));

	return 0;
}