int sum_of_naturlnumber(int);
main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=sum_of_naturlnumber(n);
    printf("%d",x);
}
int sum_of_naturlnumber(int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    return(sum);
}
