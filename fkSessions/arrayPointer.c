#include <stdio.h>

int main () {
	
	int roll[] = {1, 2, 3, 4};
	int *ptr = roll;
	printf("printing roll: %p\n", (void*)roll);
	printf("print ptr assigned %p\n", (void*)ptr);

	printf("address of roll: %p\n", &roll);

	char str[10] = "abcd";
	printf("%p\n", (void*)str);
	printf("%s\n", str); 
	return 0;

}
