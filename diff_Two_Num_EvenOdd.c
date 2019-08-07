#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if((a-b)%2==0)
    printf("even");
    else
    printf("odd");
    return 0;
}