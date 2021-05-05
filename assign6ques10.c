//program to print all prime factors of a given number
main()
{
    int a,i,j;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=2;j<=i-1;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(i==j)
            {
                printf("%d\n",i);
            }
        }
    }
}
