#include <stdio.h>

int main()
{
    int x = 25;
    int *p = &x;
    int **q = &p;

    printf("Initial value of x = %d\n", x);

    *p = 40;
    printf("After *p = 40, x = %d\n", x);

    **q = 75;
    printf("After **q = 75, x = %d\n", x);

    return 0;
}