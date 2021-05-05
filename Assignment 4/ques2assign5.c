main()
{
    int n,i,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i*i;
        i++;

    }
    printf("sum of cube of %d is %d",n,sum);
    getch();
}
