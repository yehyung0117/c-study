#include <stdio.h>

int main()
{
    int n, i, t;
    int a[24] = {0};
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &t);
        a[t]+=1;
    }
    
    for(i=1; i<24; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
