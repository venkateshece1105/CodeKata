#include<stdio.h>
 void main()
 {
     char letter;
     printf("enter the character");     scanf("%s",&letter);
     if(letter== 'a' || letter== 'e' || letter== 'i' || letter== 'o'|| letter=='u')
     printf("%s is vowels");
    else
   printf("%s is consonant");
 }