#include<stdio.h>
int main()
{
    int N,count;
    
    scanf("%d",&N);
    count=0;
    while(N>0)
    {
        count++;
        N/=10;
    }
    printf("%d",count,N);
    return 0;
}