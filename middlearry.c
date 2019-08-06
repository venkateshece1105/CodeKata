#include<stdio.h>
#include<conio.h>
void main()
{
    int a[15],i,n,middle;
    scanf("%d",&n);
 
    printf("",n);
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);
 
    middle = a[1];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] = middle )
            middle = a[i];
    }
 
 
    printf("%d",middle);
 
 }