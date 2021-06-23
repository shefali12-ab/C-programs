int check_prime(int);
main()
{ int n,x;
printf("Enter a number");
scanf("%d",&n);
x=check_prime(n);
printf("%d",x);

}
int check_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i)
            break;
    }
    if(i==n)
        return(1);
    else
        return(0);

}
