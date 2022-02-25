#include <stdio.h>

int main()
{
    int r, n, i;
    long long a;
    scanf("%lld %d %d", &a, &r, &n);
    
    for(i=1; i<n; i++)
    {
        a*=(long long)r;
    }
    
    printf("%lld", a);

    return 0;
}
