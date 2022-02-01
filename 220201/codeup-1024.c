#include <stdio.h>

int main ()
{   
    char word[21] = "";
    int i;
    
    scanf("%s", word);
    
    for(i=0; word[i]!='\0'; i++)
    {
        printf("\'%c\'\n", word[i]);
    }
    
    return 0;
}
