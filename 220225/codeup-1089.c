#include <stdio.h>

int main()
{
    int a, d, n, result;
    
    scanf("%d %d %d", &a, &d, &n);
    
    result=a+(n*d-d);
    
    printf("%d", result);

    return 0;
}
