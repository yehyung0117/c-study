#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    
    if(a==0);
    {
        if(a>89)
        {
            printf("%c\n", 'A');    
        }
            else if(a>69)
            {
                printf("%c\n", 'B');     
            }
                else if(a>39)
                {
                    printf("%c\n", 'C');     
                }
                    else
                    {
                        printf("%c\n", 'D');     
                    }
            
    }
            
    return 0;
}
