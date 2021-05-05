main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    printf("sum of squares of %d natural number is %d",n,sum);
    getch();

}
