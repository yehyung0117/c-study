#include <stdio.h>

int main()
{
    char c,a;
    
    scanf("%c", &c);
    
    a='a';
    do {
        printf("%c ",a);
        a++;
    }while(a<=c);
    
    return 0;
}
