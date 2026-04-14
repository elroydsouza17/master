#include<stdio.h>

int main () {
	int smallestDigit = 9;
	int largestDigit =  0;

	printf("Enter a number");
	int number;
	scanf("%d",&number);


	do {
		int digit = number % 10;
		if ( digit > largestDigit) largestDigit = digit;
		if ( digit < smallestDigit) smallestDigit = digit;
		number = number / 10;
	} while (number > 0 );

	printf("largest number is :%d\n",largestDigit);
	printf("smallest number is :%d\n",smallestDigit);


}
