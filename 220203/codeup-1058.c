#include <stdio.h>

int main() 
{
    int a, b;
    
    a, b = (0||1);
    
    scanf("%d %d", &a, &b);
    printf("%d", (!a&&!b)&&(!a&&!b)); 
    
    return 0;
}    
