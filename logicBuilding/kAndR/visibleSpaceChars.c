/**************************************************************************
    Program to replace invisible chars with visible chars like tabs ...
***************************************************************************/

#include <stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        // printf("%d\n",c);
        if(c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if(c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        putchar(c);
    }
}