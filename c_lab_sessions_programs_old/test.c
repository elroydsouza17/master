
#include <stdio.h>
//!SECTION


int addNumbers(int a, int b);

int main() {
  int num1, num2;
  int sum;

  printf("Sum: %d\n", sum);
  // Get input from user
  printf("Enter first number: ");
  scanf("%d", &num1);
  
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  // Call the function to add two numbers
  sum = addNumbers(num1, num2);
  
  printf("Sum of %d and %d is: %d\n", num1, num2, sum);
  return 0;
}

// Function to add two numbers and return the sum
int addNumbers(int a, int b) {
  return a + b;
}