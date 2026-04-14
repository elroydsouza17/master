#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_OF_PARAMS 2
#define MAX_CHAR_SIZE 50

int insertElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char element[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arrayLen);

int main()
{   
    int students;
    printf("Enter the number of students\n");
    scanf("%d",&students);

    char (*studentDB)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = malloc(students * sizeof(char[NUM_OF_PARAMS][MAX_CHAR_SIZE]));

    //Take input
    for(int i = 0; i < students; i++)
    {
        printf("Enter Student %d Name\n",i);
        scanf("%s",studentDB[i][0]);

        printf("Enter Student %d Mobile number\n",i);
        scanf("%s",studentDB[i][1]);
    }


    printf("\nPrinting Student DB Details.....\n\n");
    for(int i = 0; i < students; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }
    

    printf("Inserting elements.....\n");
    insertElement(studentDB, studentDB[0], 1, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE) );
    
    printf("\nPrinting  student DB details.....\n\n");
    for(int i = 0; i < students + 1; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }



}

int insertElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char element[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes)
{
    char (*ptr)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = realloc(array, arraySizeInBytes + sizeof(NUM_OF_PARAMS * MAX_CHAR_SIZE));
    int arrayLen = arraySizeInBytes / sizeof(NUM_OF_PARAMS * MAX_CHAR_SIZE);
    for (int i = arrayLen; i >= index; i--)
    {
        // ptr[i + 1] = ptr[i];
        memcpy(ptr[i + 1], ptr[i], sizeof(ptr[i]));
    }

    // ptr[index] = element;
    memcpy(ptr[index], element, NUM_OF_PARAMS * MAX_CHAR_SIZE);
    return 1;
}


