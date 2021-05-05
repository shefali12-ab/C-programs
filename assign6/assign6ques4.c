// program to print next prime number of given number
main()
{
    int x,i,y;
    printf("Enter a number");
    scanf("%d",&x);
    for(y=x+1;y>x;y++)
    {
        for(i=2;i<=y-1;i++)
        {
            if(y%i==0)
            {
                break;
            }
        }
        if(i==y)
        {
            printf("%d",y);
            break;
        }
    }
}
