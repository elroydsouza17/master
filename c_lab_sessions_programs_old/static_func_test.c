#include <stdio.h>

int *ptr = NULL;

// Static function - visible only in this file
static void staticFunction() {
    printf("%s This is a static function.\n", __FILE__);
}

// Function demonstrating static local variable
void demonstrateStaticLocal(void) {
    // Static local variable - retains value between calls
    static int staticLocal = 0;
    ptr = &staticLocal;
    staticLocal++;
    printf("Static local variable: %d\n", staticLocal);
}

