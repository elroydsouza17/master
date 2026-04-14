#include <stdio.h>

void printArray(int array[], int sizeOfArray);
int swapPointers(int array1[], int array2[]);

int main()
{
    int array1[] =    {1, 2, 3, 4, 5};
    int array2[] =    {6, 7, 8, 9, 10};

    int sizeOfArray = sizeof(array1)/sizeof(array1[0]);
    int temp;

    printArray(array1, sizeOfArray);
    printf("\n");
    printArray(array2, sizeOfArray);
    printf("\n");

    for(int index = 0; index < sizeOfArray; index++)
    {
        temp = array1[index];
        array1[index] = array2[index];
        array2[index] = temp;
    }

    printArray(array1, sizeOfArray);
    printf("\n");
    printArray(array2, sizeOfArray);

}

void printArray(int array[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", array[i]);
    }
}

