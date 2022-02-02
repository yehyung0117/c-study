#include<stdio.h>

int main (void)
{
    int a, b, c, sum;
    
    scanf("%d %d %d", &a, &b, &c);
    
    sum = a + b+ c;
    
    printf("%d\n", sum);
    printf("%.1f\n", (float)sum/(float)3);
    
    return 0;
}
