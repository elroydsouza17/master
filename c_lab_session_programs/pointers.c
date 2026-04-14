#include <stdio.h>

int main() {
    // Declare an integer variable
    int num = 0x12345678; // 4 bytes
    
    // Declare a pointer to an integer
    int *ptr; //= &num; ptr++
    
    // Assign the address of num to ptr
    ptr = &num;
    
    // Print the value of num using the variable
    printf("Value of num: 0x%x\n", num);
    
    // Print the address of num
    printf("Address of num: %p\n", (void*)&num);
    
    // Print the value of ptr (which is the address of num)
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Size of ptr: %lu\n", sizeof(void*));
    
    // Dereference ptr to get the value it points to
    printf("Value pointed to by ptr: 0x%x\n", *ptr);
    
    // Modify the value through the pointer
    *ptr = 20;
    printf("After modifying through ptr, num is: %d\n", num);
    
    return 0;
}

