#include <stdio.h>

int main () {

	int numberOne; 
	int numberTwo; 
	int numberThree;

	printf("Enter first number : \n");
	scanf("%d",&numberOne);

	printf("Enter Second number : \n");
	scanf("%d",&numberTwo);

	printf("Enter Third number : \n");
	scanf("%d",&numberThree);

	if ( numberOne > numberTwo ) {
		numberTwo = numberOne;
	}

	if ( numberTwo > numberThree) {
		numberThree = numberTwo;
	}

	printf("Largest number is %d\n",numberThree);
	return 0;	
}

