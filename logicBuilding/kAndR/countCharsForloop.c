#include <stdio.h>

int main()
{
    long nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ; // Null statement since no body is required but loops standards need a body statement hence we just use ;

    printf("%ld\n",nc);
}