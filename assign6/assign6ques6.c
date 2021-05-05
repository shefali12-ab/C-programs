//program to print first n prime number
main()
{
    int n,flag=0,y,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(y=2;flag<n;y++)
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
            printf("%d\n",y);
            flag=flag+1;
        }

    }
}
