#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of stairs:\t");
    scanf("%d",&n);
     for (i = 1; i <= n; i++) {

        int k = (i % 2 != 0) ? i + 1 : i;
        for (j = 0; j < k; j++)
            printf("01");
        printf("\n");
     }
        return 0;
}
