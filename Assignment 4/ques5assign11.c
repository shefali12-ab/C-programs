main()
{
    int a[0],i,min=a[0];
    printf("enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {

        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("smallest number is %d",min);
    getch();
}
