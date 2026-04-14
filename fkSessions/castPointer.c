#include <stdio.h>

int main ()  {
	int n = 0x01020304;
	int *ptr = &n;
	printf("Address of int pointer :%p\n",ptr);
	char *p = (char *)ptr;
	printf("Address of char pointer :%p\n",p);
	printf("address is:  %p\n",p);
	printf("%p :value at  %x\n",p,*p++);
	return 0;
}
