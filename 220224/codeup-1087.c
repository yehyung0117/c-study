#include <stdio.h>

int main()
{
    int i, n, sum;
    sum = 0;
    
    scanf("%d", &n);
    for(i=1; n>sum; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
