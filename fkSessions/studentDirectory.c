#include <stdio.h>
#define START_INDEX 1

int main () {
	int students = 0;
	printf("Enter no students to be added\n");
	scanf("%d",&students);

	int rollNumber [students];
	char class [students];
	long int mobileNumber [students];

	for (int i = 0; i < students; i++) 
	{
		printf("Enter Student%d's roll no\n", i + START_INDEX);
	        scanf("%d", &rollNumber[i]);
		
		printf("Enter Student%d's class\n", i + START_INDEX);
	        scanf(" %c", &class[i]);

		printf("Enter Student%d's mobile number\n", i + START_INDEX);
	        scanf("%ld", &mobileNumber[i]);
					
	}

	
	printf("The student details are:\n");

	for (int i = 0; i < students; i++) 
	{
		printf("Student %d's roll no: %d\n" ,i + START_INDEX, rollNumber[i]);
		printf("Student %d's class: %c\n" ,i + START_INDEX,class[i]);
		printf("Student %d's Mobile Number: %ld\n" , i + START_INDEX, mobileNumber[i]);
		printf("-----------------------------\n");
	}


	return 0;
}	
