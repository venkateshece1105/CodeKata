#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, i;
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("%d\n", count + 1);
}