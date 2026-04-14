#include <stdio.h>


int main() {
    int size = 0;
    
    printf("Enter the size:");
    scanf("%d", &size);
    
    int arr[size];
    printf("Size of the array: %d\n", (int)sizeof(arr));
    printf("Entered size: %d\n", size);
    return 0;
}