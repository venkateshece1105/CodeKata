
#include<stdio.h>
void main()
{
  char a[50],b[50];
  int i=0;
  int j=0;
  gets(a);
  gets(b);
  while(a[i]!='\0')
  {
    i++;
  }
  while(b[j]!='\0')
  {
    a[i]=b[j];
    j++;
    i++;
  }
  a[i]='\0';
  printf("%s",a);
}
