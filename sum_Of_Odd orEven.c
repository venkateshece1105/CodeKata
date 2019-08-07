#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if((n+m)%2==1)
    printf("odd");
    else
    printf("even");
    return 0;
}
