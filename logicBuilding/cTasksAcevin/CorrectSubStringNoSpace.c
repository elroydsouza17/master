#include <stdio.h>
#include <string.h>

int bubbleSortString(char array[], int sizeOfArray);
int printSubString(char string[], int sizeOfString, int startIndex, int sizeOfSubstring);


int main ()
{
	char str1 [] = "hellofourtwooneworld";
	char str2 [] = "onetwofour";
 	int searchWindowSize = strlen(str2);
    int searchStringSize = strlen(str1);
    bubbleSortString(str2, searchWindowSize);
    char substring[searchWindowSize + 1];

    for (int i = 0; i < (searchStringSize - searchWindowSize); i++)
    {
        strncpy(substring, &str1[i], searchWindowSize);
        substring[searchWindowSize] = '\0';    
        bubbleSortString(substring, searchWindowSize);
        int isMatch = strcmp(substring, str2);
        if(isMatch == 0) 
        {
            printf("substring matches at %d\n", i);
            printSubString(str1, searchStringSize, i, searchWindowSize);
        }
    }
}

int bubbleSortString(char array[], int sizeOfArray)
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

int printSubString(char string[], int sizeOfString, int startIndex, int sizeOfSubstring)
{
    if(sizeOfSubstring > sizeOfString || startIndex + sizeOfSubstring > sizeOfString)
    {
        printf("Please enter valid arguments!!");
        return 1;
    }

    for (int index = startIndex; index < (startIndex + sizeOfSubstring); index++)
    {
        printf("%c",string[index]);
    }
    return 0;
}