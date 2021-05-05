main()
{
    int a[10],i,sum=0;
    printf("enter a 10 numbers");
     for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("%d",sum);
    getch();

}
