#include <stdio.h>

int main() {
    // Declare an integer variable
    int roll[] =  {1,2,3,4,5,6,7,8}; // 10 * 4 bytes

    int *piRoll = (int *)&roll;

    printf("Address of roll: %p\n", (void*)roll);
    for(int i = 0; i < 8; i++) {
        printf("Value of roll[%d]: %d, %p\n", i, piRoll[i], (piRoll+i)); // *(piRoll + i)
    }
    return 0;
}
