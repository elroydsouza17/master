#include <stdio.h>

int main()
{
    int c;
    // c = getchar();
    printf("%c\n", EOF);
    printf("%ld\n",sizeof(EOF));
    while((c = getchar()) != EOF)
    {   
        putchar(c);
    }

}