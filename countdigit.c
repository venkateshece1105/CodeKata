 #include <stdio.h>
int main()
{
    int n;
    int a=0;
    scanf("%d",&n);
    while(n != 0)
    {
        n /= 10;
        a++;
    }
    printf("%d",a);
    return 0;
}