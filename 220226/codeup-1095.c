#include <stdio.h>

int main()
{
    int n, i, k;
    int a[10000] = {0};
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    k = a[0];
    
    for(i=0; i<n; i++)
    {
        if(a[i]<k)
            k = a[i];
    }
    
    printf("%d ", k);
    
    return 0;
}
