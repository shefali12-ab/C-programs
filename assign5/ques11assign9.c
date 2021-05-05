main()
{
    long long x,i,sum=0,first=0,second=1;
    printf("Enter a number");
    scanf("%lld",&x);
    for(i=1;sum!=x&&sum<x;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
    }
    if(sum==x)
    {
        printf("Given number is term in Fibonacci series");

    }
    if(sum>x)
    {
        printf("Given number is not term in Fibonacci series");

    }

}
