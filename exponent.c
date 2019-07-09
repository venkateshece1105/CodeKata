 #include<stdio.h>
void main()
{
    int n,k;
    int count=1;
    scanf("%d",&k);
    scanf("%d",&n);
    while(n!=0)
    {
      count=count*k;
      n--;
    }
    printf("%d",count);
}