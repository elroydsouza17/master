#include <stdio.h>

int main() {
    // Declare an integer variable
    int affan = 0x10203040; // 4 bytes

    char *piRoll = (char *)&affan;

    printf("Value of affan: %x, %p\n", *piRoll++, piRoll);
    printf("Value of affan: %x, %p\n", *piRoll++, piRoll);
    printf("Value of affan: %x, %p\n", *piRoll++, piRoll);
    printf("Value of affan: %x, %p\n", *piRoll++, piRoll);


    printf("Value of affan: %x, %p\n", (*piRoll)++, piRoll);
    printf("Value of affan: %x, %p\n", (*piRoll)++, piRoll);
    printf("Value of affan: %x, %p\n", (*piRoll)++, piRoll);
    printf("Value of affan: %x, %p\n", (*piRoll)++, piRoll);
    return 0;
}

