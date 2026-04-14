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
            // printf("it going in here");
            c = getchar();
            }
        }
    putchar(c);
    }
}