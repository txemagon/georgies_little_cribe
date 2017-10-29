#include <stdio.h>

bool
es_primo(int n)
{
    for (int divisor=n-1; divisor>1; divisor--)
        if (n % divisor == 0)
            return false;

    return true;
}


int
main()
{
    for (int i=2; i<200; i++)
        if ( es_primo(i) )
            printf("%i (%i)\t", i, i/10 + i%10);

    printf("\n");
    return 0;
}
