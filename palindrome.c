#include <stdio.h>
int main()
{
    int n, r=0, remainder, k;
    scanf("%d", &n);
    k = n;
    while( n!=0 )
    {
        remainder = n%10;
        r= r*10 + remainder;
        n /= 10;
    }
    if (k==r)
        printf("yes");
    else
        printf("no");
        return 0;
}

