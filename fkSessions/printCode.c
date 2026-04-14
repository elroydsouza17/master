#include <stdio.h>

int main () {
	FILE *fp = fopen("printCode.c","r"); // opens file basically returns a pointer to a FILE
	int ch;

	while((ch = fgetc(fp)) != EOF) { // fgetc() reads 1 char each time and moves offset after each call

		putchar(ch); // just writes to stdout put 

	}
	
	fclose(fp); // Close file , so memory is released.

	return 0;
}



