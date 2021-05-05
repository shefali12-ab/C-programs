main()
{
    int a[10],sum1=0,sum2=0,i;
    printf("enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    if(a[i]%2==0)
    {
        sum1=sum1+a[i];
    }
    else
    {
        sum2=sum2+a[i];
    }
    }
    printf("sum of even number is %d and sum of odd number is %d",sum1,sum2);
    getch();
}
