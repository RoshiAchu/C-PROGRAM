#include<stdio.h>
int find_lcm(int a, int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
int main()
{
    int a, b, lcm;
    printf("\nInput first number: ");
    scanf("%d",&a);
    printf("\nInput second number: ");
    scanf("%d",&b);
    lcm = find_lcm(a,b);
    printf("\n LCM of %d and %d = %d\n\n", a, b, lcm);
    return 0;
}


