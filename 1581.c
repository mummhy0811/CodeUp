#include <stdio.h>

void myswap(int*a, int*b) {
    
    int p;
    if (*a > * b) {
        p = *a;
        *a = *b;
        *b = p;
    }
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
