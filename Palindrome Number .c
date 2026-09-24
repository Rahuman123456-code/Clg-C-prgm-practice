#include<stdio.h>
int main()
{
 int n,reverse=0,input_num;
 printf("Enter a Number: ");
 scanf("%d",&n);
 input_num = n;
 while(n != 0)
 {
  reverse = reverse * 10 + (n%10);
  n = n / 10;
  }
  if(input_num == reverse)
  {
   printf("Palindrome Number");
   }
   else 
   {
   printf("Not a Palindrome Number");
   }
   return 0;
   }
 