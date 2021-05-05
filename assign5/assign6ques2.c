main()
{
    int i,x;
    for(i=2;i<=100;i++)
    {
        for(x=2;x<=i-1;x++)
        {
            if(i%x==0)
            {
                break;
            }
        }
        if(i==x)
        {
            printf("\n%d",x);
        }
    }
}
