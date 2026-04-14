#include <stdio.h>

int main()
{
        int a = 1, 2;// Gives error
        int a, b = (1, 2); 
	printf("%d\n", a);
	printf("%d\n", b);
	int c = 3, d = 4;
	printf("%d\n", c);
	printf("%d\n", d);
	int i ;
	i = c, d;
	printf("%d\n",i);
	i = (c, d);
	printf("%d\n",i);
	int f() { return 7; }
        int g() { return 8; }
	int y =  c,j;
	printf("y:%d\n",y);
        int x = (printf("assigning x"), f(), g() );
	return 0;
}

