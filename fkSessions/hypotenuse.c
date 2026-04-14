#include <stdio.h>
#include <math.h>

int main ()
{
	printf("Enter lenght of side 1\n");
	double side1;
	scanf("%lf",&side1);

	printf("Enter lenght of side 2\n");
	double side2;
	scanf("%lf",&side2);
	
	double hypotenuse = sqrt((side1 * side1) +  (side2 * side2));

	printf("Lenght of hypotenuse is : %f\n",hypotenuse);
}


