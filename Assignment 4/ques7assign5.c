main()
{
    int x,r;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        printf("%d",r);
        x=x/10;
    }
    getch();
}
