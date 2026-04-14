#include <stdio.h>

int main() {
    int roll = 101;
    const int roll1 = 102;

    scanf("%d", &roll1);
    // Example 1: const int *pRoll - pointer to const int
    // Can change the pointer, but cannot change the value it points to
    const int *pRoll = (const int *)&roll;
    printf("Example 1: const int *pRoll\n");
    printf("Value: %d\n", *pRoll);
    // *pRoll = 200; // ERROR: cannot modify value through const pointer
    pRoll = (const int *)&roll1; // OK: can change pointer
    printf("After changing pointer: %d\n\n", *pRoll);
    
    // Example 2: const int *pRoll2 - another pointer to const int
    const int *pRoll2 = (const int *)&roll1;
    printf("Example 2: const int *pRoll2\n");
    printf("Value: %d\n", *pRoll2);
    // *pRoll2 = 300; // ERROR: cannot modify value
    pRoll2 = (const int *)&roll; // OK: can change pointer
    printf("After changing pointer: %d\n\n", *pRoll2);
    
    // Example 3: const int *const pRoll3 - const pointer to const int
    // Cannot change the pointer or the value it points to
    int *const pRoll3 = (int *)&roll;
    printf("Example 3: const int *const pRoll3\n");
    printf("Value: %d\n", *pRoll3);
    *pRoll3 = 400; // ERROR: cannot modify value
    // pRoll3 = (const int *)&roll1; // ERROR: cannot change pointer


    
    return 0;
}
