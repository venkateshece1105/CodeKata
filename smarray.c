#include<stdio.h>
void main()
{#include<stdio.h>
void main()
{
    int a[15],i,n,small;
    scanf("%d",&n);
 
    printf("",n);
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);
 
    small= a[0];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] < small )
            small= a[i];
    }
    printf("%d",small);
}