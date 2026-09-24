#include<stdio.h>
int main()
{
 int n,i,factorial=1;
 printf("Enter a Factorial Num: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  factorial = factorial * i;
  }
  printf("Factorial Number:%d",factorial);
  return 0;
  }
  