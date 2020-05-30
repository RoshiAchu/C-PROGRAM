#include<stdio.h>
int main()
{
 int no,i,sum=0;
 printf("Input number:\t");
 scanf("%d",&no);
 while(no>0)
 {
  i=no%10;
  sum+=i;
  no/=10;
 }
 printf("\nSum of digits: %d",sum);
 return 0;
}
