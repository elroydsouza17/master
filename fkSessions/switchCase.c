#include <stdio.h>

int main()
{
    printf("Choose a menu option:\n");
    printf("1. Add patient details\n");
    printf("2. View patient details\n");
    printf("3. Search patient details\n");
    printf("4. Exit\n");

    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Adding patient details...\n");
            // Code to add patient details goes here
            break;
        case 2:
            printf("Viewing patient details...\n");
            // Code to view patient details goes here
            break;
        case 3:
            printf("Searching patient details...\n");
            // Code to search patient details goes here
            break;
        case 4:
            printf("Exiting the program...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}