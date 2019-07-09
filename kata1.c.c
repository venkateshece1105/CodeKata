#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>0)
{
printf("%d is positive",n);
}
else if(n<0)
{
printf(" %d negative",n);
}
else
{
printf(" %d neither positive or negative",n);
}

}
