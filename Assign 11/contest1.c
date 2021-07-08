//given number n to find sum of even digits and sum of odd digits
#include<stdio.h>
int main()
{
    int n ,sum_even=0,sum_odd=0,x;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
       x= n%10;
        if(x%2)
            sum_odd=sum_odd+x;
        else
            sum_even=sum_even+x;
        n=n/10;
    }
printf("%d %d",sum_even,sum_odd);
}
