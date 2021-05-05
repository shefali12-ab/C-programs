main()
{
    int a[10],i,max=a[0];
    printf("Enter ten numbers");
     for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {

        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("greatest element is %d",max);
    getch();
}
