#include<stdio.h>
int main()
{
 int units;
 float bills;
 printf("Enter Electricity Consumed Unit : ");
 scanf("%d",&units);
 if(units<=100)
 {
  bills = units * 1;
  printf("Bills = %f",bills);
  }
   else if(units<=200)
  {
   bills = 100 * 1 + (units - 100) * 2;
   printf("Bills = %f",bills);
   }
 else if(units<=300)
   {
    bills = 100 * 1 + 100 * 2 +(units - 200) * 3;
    printf("Bills = %f",bills);
    }
  else
    {
     bills = 100 * 1 + 100 * 2 + 100 * 3 + (units - 300) * 5;
     printf("Bills = %f",bills);
     }
  return 0;
  }