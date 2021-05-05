main()
{
    long n,a=1,b=0,c,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(i==n)
        {
            printf("%lld",c);
        }
        a=b;
        b=c;
    }
}
