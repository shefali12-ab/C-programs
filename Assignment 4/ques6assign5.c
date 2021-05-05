main()
{
    int x,sum=0,r;
    printf("Enter a number");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        sum=sum+x%10;
        x=x/10;
    }


    printf("sum of digits is %d",sum);

    getch();

}
