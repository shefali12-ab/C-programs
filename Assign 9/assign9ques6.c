int sum_square_naturalnumber(int);
main()
{ int n,x;
printf("Enter a number");
scanf("%d",&n);
x=sum_square_naturalnumber(n);
printf("%d",x);

}
int sum_square_naturalnumber(int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    return(sum);
}
