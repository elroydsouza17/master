#include <stdio.h>

int main () {
	float base;
	printf("Enter the base\n");
	scanf("%f",&base);

	int power;
	printf("Enter the power\n");
	scanf("%d",&power);

	if(power < 0) {
		base = 1 / base;
		power = - power;
	}

	float product = 1;
	for (int i = 0; i < power; i++)
       	{
		product = product * base;
	}
	printf("Answer is %f",product);
}
