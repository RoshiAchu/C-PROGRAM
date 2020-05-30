#include<stdio.h>
int main()
{
 printf("\nWelcome to INSTANT FOODIES\n");
 int choice,flag=1;
 while(flag==1){
 printf("\nEnter a number from values 1 to 5:\t");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
    printf("\nFood Item - Palak Paneer\nPrice - Rs.200\n");flag=0;break;
 case 2:
    printf("\nFood Item - Pani Puri\nPrice - Rs.100\n");flag=0;break;
 case 3:
    printf("\nFood Item - Rose Phirni\nPrice - Rs.370\n");flag=0;break;
 case 4:
    printf("\nFood Item - Chole Bhature\nPrice - Rs.170\n");flag=0;break;
 case 5:
    printf("\nFood Item - Vada Pav\nPrice - Rs.88\n");flag=0;break;
 default:
    printf("\nPlease enter a number from values 1,2,3,4,5\n");break;
 }}
 return 0;
}
