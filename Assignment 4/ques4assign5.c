main()
{
    int n,i=1, fact =1;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=n*fact;
        n--;
    }
    printf("%d",fact);
    getch();

}
