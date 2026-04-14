#include <stdio.h>

int swapByvalue (int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

	return 0;
}


int swapByReference(int *a, int *b) {
	int temp ;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int swapPointers(int *a, int *b) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}


int main () {
	int a = 10;
	int b = 20;

	printf("Value of a: %d , value of b:%d\n", a, b);
	
	swapByvalue(a , b); // This will not swap the numbers.
	printf("Value of a: %d , value of b:%d\n", a, b);
	printf("Value of pointer of a: %p , value of b:%p\n", &a, &b);
	swapByReference(&a, &b);
	printf("Value of a: %d , value of b:%d\n", a, b);
	printf("Value of pointer of a: %p , value of b:%p\n", &a, &b);
	swapPointers(&a, &b);
	printf("Value of a: %d , value of b:%d\n", a, b);
	printf("Value of pointer of a: %p , value of b:%p\n", &a, &b);


}
