#include <stdio.h>

int main()
{
    int i, sum, n;
    n=0;
    
    scanf("%d", &sum);
    
    for(i=0; n < sum; i++)
    {
        n += i;
    }
    
    printf("%d", i-1);
    
    return 0;
}
