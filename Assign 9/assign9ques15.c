void armstrong_given_range(void);
main()
{
    armstrong_given_range();
}
void armstrong_given_range(void)
{
    int x,y,z,k,sum;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    for(z=x+1;z<y;z++)

    {   k=z;
    sum=0;

        while(k!=0)
        {

            sum=sum+(k%10)*(k%10)*(k%10);
            k=k/10;
        }
        if(z==sum)
            printf("%d\n",z);
    }
}
