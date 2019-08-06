
#include <stdio.h>
int main()
{
   int num;
   scanf("%d", &num);
   if((num != 1) && ((num &(num - 1)) == 0))
      printf("yes");
   else
      printf("no");
 return 0;
}
