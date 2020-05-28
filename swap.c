#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter values for a and b\n");
    scanf("%d%d",&a,&b);
    a+=b;//Sum of the two numbers
    b=(a-b);
    a=a-b;
    printf("Swapped values a:%d b:%d",a,b);
    return 0;
}
