#include <stdio.h>


int globalVariable = 0; // Static variable
/**
    function1:  local variables, and parameters are stored in the stack memory.
    function2:  local variables, and parameters are stored in the stack memory.
    function3:  local variables, and parameters are stored in the stack memory.


    malloc:  dynamically allocated memory is stored in the heap memory.
    ---------- Heap Memory ---------------
 */
void dummyfunction1(){
    int globalVariable = 0;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Local variable
    printf("This is a dummy function with a local variable: %d\n", a[globalVariable]);

    printf("This is a dummy function with a local variable: %d\n", a[globalVariable]);

}
 // Character data type

void dummyFunction() {
    // This function is just a placeholder
    // to demonstrate the structure of the file.
    int a = 10; // Static variable
    dummyfunction1();
    // This variable retains its value between function calls because it is stored in static memory.
    // It is initialized only once and retains its value across multiple calls to this function.    
    // This variable is local to this function
}   


int main() {
    // Integer data type
    // static int age = 25;

    // // Floating point data type
    // float height = 5.9f;

    // // Double precision floating point
    // double weight = 70.5;

    // // Character data type
    // char grade = 'A';

    #pragma pack(1)
    char name[] = { 'F', 'a', 'k', 'h', 'r', 'u', 'd', 'd', 'i', 'n', ' ', 'K', 'h', 'a', 'n' };
    char surname[] = { 'K', 'h', 'a', 'n' };
    name[15] = 32;
    printf("Name: %s, %d\n", name, sizeof(name));

    for(int i = 0; i < 20; i++) {
        printf("name[%d]: %d\n", i, name[i]);
    }
    // // Print the values
    // printf("Age: %d\n", age);
    // printf("Height: %.1f\n", height);
    // printf("Weight: %.1lf\n", weight);
    // printf("Grade: %c\n", grade);

    while(globalVariable < 10) {
        // printf("Global variable value: %d\n", globalVariable);
        globalVariable++;
        // dummyFunction(); // Call the dummy function
    }
    return 0;
}