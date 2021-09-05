//write a function to swap two numbers here using pointers
void swap(int*,int*);
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);

    swap(&num1,&num2);
    printf("after swapping numbers are %d and %d",num1,num2);

}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;

}
