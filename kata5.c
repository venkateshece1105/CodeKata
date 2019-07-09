 #include<stdio.h>
 int main()
 {
 int a, b, c;
     scanf("%d %d %d", &a, &b, &c);
     if (a>b)
     {
        if (a >c)
         {
             printf("a\n");
        }
        else
         {
             printf("c\n");
         }
     }
     else if (b>c)
         printf("b\n");
     else
         printf("c\n");
         return 0;

 }







