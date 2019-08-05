#include<stdio.h>
void main()
{
    int a[10],i,n,large;
    scanf("%d",&n);
 
    printf("",n);
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);
 
    largest = a[0];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] > large )
            largest = a[i];
    }
    printf("%d",large);
 }