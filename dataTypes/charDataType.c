#include <stdio.h>

int main () {
	
	char c = 'a';
	char d = 'A';
	printf("%d\n",c*10);
	printf("%c\n",c);
	printf("%d\n",d);



	// define char with an integer value
	char e = 10;
	int f = 5;
	printf("%d\n",e*f);
	printf("%c\n",65);

	// define int with a value and try to intepret as char.
	int g = 65;
	printf("%c\n",g+1);

	// char size demonstration ( since it's signed anything greater than 127 will never be reached. 
	for (char i = 0; i < 127; i++)
	{
		printf("%d\n",i);
	}



	return 0;





}
