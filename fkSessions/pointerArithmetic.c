#include <stdio.h>

int main() {

	int number = 0x12345678; // 4 bytes
	int number2 = 0x87654321; // 4 bytes
	int *ptr = &number;
	printf("Pointer value : %x at address: %p \n",*ptr, ptr);
	ptr++;
	printf("Pointer value : %x at address: %p \n",*ptr, ptr);
	//printf("Pointer value : %x at address: %p \n",*ptr, ptr++);

}


