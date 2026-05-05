#include <stdio.h>

void printBinary(int number);
void printHexadecimal(int number);

int main()
{
    printf("Enter a decimal number\n");
    int decNum;
    scanf("%d", &decNum);
    printBinary(decNum);
    printHexadecimal(decNum);
}

void printBinary(int number)
{   
    printf("Binary No is:  ");
    while(number != 0)
    {
        printf("%d",number % 2);
        number = number / 2;
    }
    printf("\n");
}

void printHexadecimal(int number)
{   
    int hexDigit;
    printf("Hexadecimal No is:  ");
    while(number != 0)
    {       
        hexDigit = number % 16;
        
        if(hexDigit == 10) printf("A");
        else if(hexDigit == 11) printf("B");
        else if(hexDigit == 12) printf("C");
        else if(hexDigit == 13) printf("D");
        else if(hexDigit == 14) printf("E");
        else if(hexDigit == 15) printf("F");
        else printf("%d",hexDigit);

        number = number / 16;
    }
    printf("\n");
}