#include <stdio.h>



void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}  

void swap_ptr(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}   




int main() {
    // Declare an integer variable
    int a = 10; // 4 bytes
    int b = 20; // 4 bytes

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap_ptr(&a, &b); // This won't swap a and b
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

