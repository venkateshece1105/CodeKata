#include<stdio.h>
int main()
{
 int a,b,rem,i;
 scanf("%d",&a);
 scanf("%d",&b); 
 for(i=a+1; i<=b-1;i++)
 {
 rem = i % 2;
 if(rem != 0)
 printf("  %d",i);
 }
 return 0;
 }
