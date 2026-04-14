#include <stdio.h>
#include <string.h>

int main()
{
    char arrayOfChars[] =  {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char arrayOfChars1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

    int arraySize = sizeof(arrayOfChars) / sizeof(arrayOfChars[0]);

    printf("Printing array\n");
    for (int i = 0; i < arraySize; i++)
        printf("%c", arrayOfChars[i]);

     memcpy(arrayOfChars + 2, arrayOfChars, 4 * sizeof(arrayOfChars[0]));

    memmove(arrayOfChars1 + 2, arrayOfChars1, 4 * sizeof(arrayOfChars1[0]));

    printf("\nPrinting array after memcpy\n");
    for (int i = 0; i < arraySize; i++)
        printf("%c", arrayOfChars[i]);

        printf("\n");


    printf("\nPrinting array after memmove\n");
    for (int i = 0; i < arraySize; i++)
        printf("%c", arrayOfChars1[i]);
    

        printf("\n");


}