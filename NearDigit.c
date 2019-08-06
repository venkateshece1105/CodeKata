#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n=="%d")
    {
    n=n+1;
    printf("%d",n);
    }
    else
    {
    n=n;
    printf("%d",n);
    }
    return 0;
}