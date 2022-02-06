#include<stdio.h>

    int main()
    
{
    int n;
        
    reload:
    scanf("%d", &n);
        
    while(n==0) goto end;
        
    printf("%d\n", n);
    
    while(n!=0) goto reload;
    end:
        
    return 0;
}
