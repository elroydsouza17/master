#include <stdio.h>

int main () {

	int num = 0x1234;
	int *ptr = &num;

	printf("pointer value %p\n", ptr);
	printf("pointer with void value %p",(void*)ptr);
	
	return 0;

}

