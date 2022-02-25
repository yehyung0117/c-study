#include <stdio.h>

int main()
{
    int m, d, n, i;
    long long a;
    
    scanf("%lld %d %d %d", &a, &m, &d, &n);
    
    for(i=1; i<n; i++)
    {
        a = (long long)a * m + d;
    }
    
    printf("%lld", a);

    return 0;
}
