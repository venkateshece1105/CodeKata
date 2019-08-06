#include <stdio.h>
int main()
{
    char s[1000];
    char a[1000];
    int i;
    int j;
    scanf("%s", s);
    scanf("%s", a);
    for(i = 0; s[i] != '\0';++i);
    for(j= 0; s[j] != '\0';++j);
    if(s[i]>s[j] || s[i]==s[j])
    printf("%s",s);
    else
    printf("%s",a);
    return 0;

}