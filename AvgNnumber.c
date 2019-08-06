#include<stdio.h>
int main()
{
    int n, i;
    int sum = 0, x;
    scanf("%d", &n);
    printf("", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum += x;
        sum=sum/n;
    }
    printf("%d",sum);
    return 0;
}