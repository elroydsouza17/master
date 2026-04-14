#include <stdio.h>

int main () {

	int a = 0x1234;
	int *ptr = &a;

	printf("Value of pointer %p is %x", ptr, *ptr);

}
