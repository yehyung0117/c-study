#include <stdio.h>

int main()
{

    int b, n;

    scanf("%X", &n);

        for(b=1 ; b<16 ; b++)
        {
            printf("%X*%X=%X\n", n, b, n*b);
        }

    return 0;
}
