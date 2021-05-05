main()
{
    int n,i=0,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<n)
    {
        sum=sum+(2*i+1);
        i++;
    }
    printf("sum of %d odd natural number is %d",n,sum);
    getch();
}
