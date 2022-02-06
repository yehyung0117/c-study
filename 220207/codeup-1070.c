#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d",&a);
    
    switch(a)
    {
        case 3:
        case 4:
        case 5:
            printf("%s", "spring");
        break;
        
        case 6:
        case 7:
        case 8:
            printf("%s", "summer");
        break;
    
        case 9:
        case 10:
        case 11:
            printf("%s", "fall");
        break;
        
        default:
            printf("%s", "winter");
}
            
    return 0;
}
