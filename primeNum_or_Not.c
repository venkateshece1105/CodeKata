#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, j, flag;
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d", num);
    }
    flag = 0;
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("yes");
     else
        printf("no");
}