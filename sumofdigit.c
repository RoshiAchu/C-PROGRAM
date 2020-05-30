#include<stdio.h>
int main()
{
 int no,i,sum=0;
 printf("Enter number:\t");
 scanf("%d",&no);
 while(no>0)
 {
  i=no%10;
  sum+=i;
  no/=10;
 }
 printf("\nSum of digits is:%d",sum);
 return 0;
}
