#include <stdio.h>

// Static global variable - visible only in this file
static int staticGlobal = 10;
extern int *ptr;
// Static function - visible only in this file
static void staticFunction() {
    printf("%s This is a static function.\n", __FILE__);
}

// // Function demonstrating static local variable
extern void demonstrateStaticLocal(void);
//     // Static local variable - retains value between calls
//     int staticLocal = 0;
//     staticLocal++;
//     printf("Static local variable: %d\n", staticLocal);
// }

int main() {
    printf("Static global: %d\n", staticGlobal);
    staticFunction();
    
    // Call the function multiple times to show static local retention
    demonstrateStaticLocal();  // Prints 1
    printf("Address of static local variable: %p, %d\n", (void*)ptr, *ptr);
    demonstrateStaticLocal();  // Prints 2
    printf("Address of static local variable: %p, %d\n", (void*)ptr, *ptr);
    demonstrateStaticLocal();  // Prints 3
    printf("Address of static local variable: %p, %d\n", (void*)ptr, *ptr);
    
    return 0;
}
