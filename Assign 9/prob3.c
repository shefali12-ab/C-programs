//program to count all numbers between 1 to 1000 inclusive divisible by 3 and 5.
main()
{
    int i,count=0;
    for(i=1;i<=1000;i++)
    {
        if(i%3==0&&i%5==0)
            count++;
    }
    printf("%d",count);
}
