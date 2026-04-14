#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int maxSize = 50;
    char *str1 = malloc(maxSize);
    char *str2 = malloc(maxSize);

    printf("Enter a string1:\n");
    fgets(str1, maxSize, stdin);

    printf("Enter a string2:\n");
    fgets(str2, maxSize, stdin);

    printf("Array 1 is :%s\n",str1);
    printf("Array 2 is: %s\n",str2);

    printf("Address of array 1 is :%p\n",str1);
    printf("Address of array 2 is: %p\n",str2);

    char *temp = NULL;
    temp = str1;
    str1 = realloc(str2, strlen(str2));
    str2 = realloc(temp, strlen(str1));

    printf("Array 1 is :%s\n",str1);
    printf("Array 2 is: %s\n",str2);

    printf("Address of array 1 is :%p\n",str1);
    printf("Address of array 2 is: %p\n",str2);

    

    
}