void PrintfRecursivly(int number)
{
     if (number < 0) 
     {
       number *= -1;
       printf("- ");           
     }
     if (number > 10) 
     {
        PrintfRecursivly(number / 10);
        printf(" ");
     }

     printf("%d", number % 10);     
}

int main()
{
   int number;
   scanf("%d",&number);
   PrintfRecursivly(number);

   return 0;
}