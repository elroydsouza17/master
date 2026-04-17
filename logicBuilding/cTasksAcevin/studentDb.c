#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_OF_PARAMS 2
#define MAX_CHAR_SIZE 50

char (*insertElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char element[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes))[NUM_OF_PARAMS][MAX_CHAR_SIZE];
char (*deleteElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes))[NUM_OF_PARAMS][MAX_CHAR_SIZE];
// int deleteElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes);
int findStudent(char name[MAX_CHAR_SIZE], char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], int arraySizeInBytes);
int writeDatabase(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char* filename, int arrayLen);
int readFile(char* filename, int arrayLen);




int main()
{   
    int students;
    printf("Enter the number of students\n");
    scanf("%d",&students);
    char (*studentDB)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = malloc(students * sizeof(char[NUM_OF_PARAMS][MAX_CHAR_SIZE]));

    // char (*studentTest)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = malloc(3 * sizeof(char[NUM_OF_PARAMS][MAX_CHAR_SIZE]));
    // printf("testing array out of bounds.....%d\n",studentTest[7][1][0]);


    // char studentDB[students][NUM_OF_PARAMS][MAX_CHAR_SIZE];

    //Take input
    for (int i = 0; i < students; i++)
    {
        printf("Enter Student %d Name\n",i);
        scanf("%s",studentDB[i][0]);

        printf("Enter Student %d Mobile number\n",i);
        scanf("%s",studentDB[i][1]);
    }


    printf("\nPrinting Student DB Details.....\n\n");
    for (int i = 0; i < students; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }

    // Search
    printf("\nEnter Name of the Student to be found\n");
    char studentName[MAX_CHAR_SIZE];
    scanf("%s",studentName);

    for (int i = 0; i < students; i++)
    {   
        if (strcmp(studentDB[i][0],studentName) ==  0)
        {
            printf("\n\nStudent %d Details are : Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
            // return 0;
            break;
        } 

        if( i == students - 1)
        {
            printf("Student details not found ... please enter valid student name !!!\n");
        }
        
    }
    

    // printf("Student details not found !! , please enter valid name\n");
    printf("Sorting records by name...\n");

    for (int k = 0; k < students; k++)
        {
        for (int i = 0; i < students - 1; i++)
        {
            char name[MAX_CHAR_SIZE];
            strcpy(name, studentDB[i][0]);
            for (int j = 0; j < strlen(name); j++)
            {
                if (studentDB[i][0][j] > studentDB[i + 1][0][j])
                {
                    char temp[1][NUM_OF_PARAMS][MAX_CHAR_SIZE];
                    memcpy(temp[0], studentDB[i], sizeof(studentDB[i]));
                    memcpy(studentDB[i], studentDB[i + 1], sizeof(studentDB[i]));
                    memcpy(studentDB[i + 1], temp[0], sizeof(studentDB[i]));
                    break;
                } 
                else if (studentDB[i][0][j] < studentDB[i + 1][0][j])
                {
                    break;
                }
                else continue;
            }

        }
    }

    printf("\nPrinting Student DB Details after sort.....\n\n");
    for(int i = 0; i < students; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }


    //Take input for student to be added 
    char newStudent[NUM_OF_PARAMS][MAX_CHAR_SIZE];
    printf("\nEnter New student's name to be added\n");
    scanf("%s",newStudent[0]);

    printf("Enter New student's Mobile no to be added\n");
    scanf("%s",newStudent[1]);
    
    printf("%s\n",newStudent[0]);
    printf("%s\n",newStudent[1]);

    // SEARCH student name in DB 
    for (int i = 0; i < students; i++)
    {
        char *existingName = studentDB[i][0];
        int insertedElement = 0;
        for (int j = 0; j < strlen(newStudent[0]); j++)
        {
            printf("comparing %c with %c\n",newStudent[0][j], existingName[j]);
            if (newStudent[0][j] < existingName[j])
            {
                studentDB = insertElement(studentDB, newStudent, i, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE) );
                insertedElement = 1;
                break;
            } 
            else if (newStudent[0][j] > existingName[j])
            {
                break;
            }
            else
            {
                continue;
            }
        }

        if (insertedElement == 0 && (i == students - 1))
        {
            printf("Inserting inside last element ......%d\n",i);
            studentDB = insertElement(studentDB, newStudent, i + 1, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE) );
            break;
        } 
        else if (insertedElement == 1)
        {
            break;
        }
        else
        {
        }
    }
    printf("Inserting new student details in student DB.....\n");
    students ++;
    // insertElement(studentDB, newStudent, 1, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE) );
    
    printf("\nPrinting  student DB details.....\n\n");
    for (int i = 0; i < students; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }

    char deletedStudentName[MAX_CHAR_SIZE]; 
    printf("Enter student's name or Mobile Number to be deleted\n");
    scanf("%s",deletedStudentName);

    printf ("Deleting student index: %s from DB.....\n",deletedStudentName);
    int delStudentIndex = findStudent(deletedStudentName, studentDB, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE));
    printf("%d",delStudentIndex);

    if (delStudentIndex > -1)
    {
        studentDB = deleteElement(studentDB, delStudentIndex, students * (NUM_OF_PARAMS * MAX_CHAR_SIZE));
        students--;
    }
    else
    {
        printf("Invalid Index...\n");
    }
    printf("len: %d",students);
    printf("\nPrinting  student DB details.....\n\n");
    for (int i = 0; i < students; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, studentDB[i][0], studentDB[i][1]);
    }

    printf("Writing DB to file.....\n");
    writeDatabase(studentDB, "studentdb.txt", students);


    printf("Reading DB details from file.....\n");
    readFile("studentdb.txt", students);
    return 0;

}

char (*insertElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char element[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes))[NUM_OF_PARAMS][MAX_CHAR_SIZE]
{
    // printf("Enter size is %ld",arraySizeInBytes + sizeof(NUM_OF_PARAMS * MAX_CHAR_SIZE));
    char (*ptr)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = realloc(array, arraySizeInBytes + (NUM_OF_PARAMS * MAX_CHAR_SIZE));
    int arrayLen = (arraySizeInBytes / (NUM_OF_PARAMS * MAX_CHAR_SIZE)) + 1;

    for (int i = arrayLen - 2; i >= index; i--)
    {

        // ptr[i + 1] = ptr[i]; not allowed 
        memcpy(ptr[i + 1], ptr[i], sizeof(ptr[i]));
    }

    // ptr[index] = element; not allowed
    memcpy(ptr[index], element, NUM_OF_PARAMS * MAX_CHAR_SIZE);
    return ptr;
}

char (*deleteElement(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], int index, int arraySizeInBytes))[NUM_OF_PARAMS][MAX_CHAR_SIZE]
{
    // printf("Enter size is %ld",arraySizeInBytes + sizeof(NUM_OF_PARAMS * MAX_CHAR_SIZE));
    int arrayLen = arraySizeInBytes / (NUM_OF_PARAMS * MAX_CHAR_SIZE);
    for (int i = index + 1; i < arrayLen; i++)
    {
        // ptr[i + 1] = ptr[i]; not allowed 
        memcpy(array[i - 1], array[i], sizeof(array[i]));
    }

    printf("\nPrinting  DB details insdie delete.....\n\n");
    for (int i = 0; i < arrayLen; i++)
    {
        printf("Student %d Name:%s\t\t Mobile No:%s\n", i, array[i][0], array[i][1]);
    }

    // ptr[index] = element; not allowed
    char (*ptr)[NUM_OF_PARAMS][MAX_CHAR_SIZE] = realloc(array, arraySizeInBytes - (NUM_OF_PARAMS * MAX_CHAR_SIZE));
    return ptr;
}

int findStudent(char name[MAX_CHAR_SIZE], char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], int arraySizeInBytes)
{
    for (int i = 0; i < arraySizeInBytes / sizeof(NUM_OF_PARAMS * MAX_CHAR_SIZE); i++)
    {   
        if (strcmp(array[i][0], name) ==  0)
        {
            printf("yes::%s",array[i][0]);
            return i;
        }
    }
    return -1;
}

int writeDatabase(char (*array)[NUM_OF_PARAMS][MAX_CHAR_SIZE], char* filename, int arrayLen)
{
    FILE *file = fopen(filename, "w");
    for(int i = 0; i < arrayLen; i++)
    {
        fprintf(file, "%d, %s, %s\n",i, array[i][0], array[i][1]);
    }
    fclose(file);
    return 0;
}

int readFile(char* filename, int arrayLen)
{
    FILE *file = fopen(filename, "r");
    char buff[50];
    for(int i = 0; i < arrayLen; i++)
    {
        fgets(buff, 50, file);
        printf("%s",buff);
    }
    fclose(file);
    return 0;
}