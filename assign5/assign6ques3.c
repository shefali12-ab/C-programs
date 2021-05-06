//program to print all the prime number between given numbers
main()
{
    int x,y,i;
    printf("Enter two number");
    scanf("%d\n%d",&x,&y);
    while(x<=y)
    {
        for(i=2;i<=x-1;i++)
        {
            if(x%i==0)
            {
                break;
            }
        }
        if(i==x)
        {
            printf("%d\n",x);
        }
        x++;
    }
}
