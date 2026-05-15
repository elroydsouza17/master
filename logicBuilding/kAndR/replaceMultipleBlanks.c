/**********************************************************************
    Program to replace multiple blank spaces with one.
**********************************************************************/
#include <stdio.h>

int main()
{
    int c; 
    int bc = 0;
    while((c = getchar()) != EOF)
    {   
        if (c ==  ' ')
        {   
            putchar(c);
            while(c == ' ')
            {
                c = getchar();
            }
        }
    putchar(c);
    }
}