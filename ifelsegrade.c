#include<stdio.h>
int main()
{
    printf("Welcome to Bit Elementary School Grading Calaculator\n");
    printf("Enter marks of student:\t");
    int mark;
    scanf("%d",&mark);
    if((85<=mark) && (mark<=100)){
        printf("\nStudent has got GRADE A");}
    else if((70<=mark) && (mark<=84)){
        printf("\nStudent has got GRADE B");}
    else if((55<=mark) && (mark<=69)){
        printf("\nStudent has got GRADE C");}
    else if((40<=mark) && (mark<=54)){
        printf("\nStudent has got GRADE D");}
    else if(mark<40){
        printf("\nStudent has got GRADE F");}
    return 0;
}
