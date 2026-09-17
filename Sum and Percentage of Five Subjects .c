#include<stdio.h>
int main()
{
 int mat,eng,beee,phy,che,sum;
 float percent;
 scanf("%d %d %d %d %d",&mat,&eng,&beee,&phy,&che);
 sum = mat+eng+beee+phy+che;
 percent =(float)sum / 5;
 printf("Sum Of The All Subjects:%d\n",sum);
 printf("Percentage:%f\n",percent);
 return 0;
 }