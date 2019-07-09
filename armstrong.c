#include <stdio.h>
 int main()
 {
    int number, num, rem, result = 0;
    scanf("%d", &number);
    num= number;
    while (num != 0)
    {
        rem = num%10;
        result += rem*rem*rem;
        num /= 10;
    }
    if(result == number)
        printf("yes");
    else
        printf("no");
        return 0;
}