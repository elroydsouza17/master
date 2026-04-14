#include <stdio.h>

void printArray(int arr[], int size);
int bubbleSortArray(int array[], int sizeOfArray);

int main()
{
    printf("Enter size of array\n");
    int size;
    scanf("%d", &size);
    int numbers[size];

    for(int index = 0; index < size; index ++)
    {
        printf("Enter a value for the %dth element of the array\n",index);
        scanf("%d",&numbers[index]);
    }

    printArray(numbers, size);
    bubbleSortArray(numbers, size);
    printArray(numbers, size);
}


void printArray(int array[], int size)
{
    printf("Elements of the array are : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
}

int bubbleSortArray(int array[], int sizeOfArray)
{
    int temp;
    for (int iteration = 0; iteration < sizeOfArray; iteration++)
    {
        for(int index = 0; index < (sizeOfArray - 1); index ++)
        {   
            if(array[index] > array[index + 1])
            {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
            }        
        }
    }

    return sizeOfArray;
}

