//program to print all the prime numbers of given number
main()
{
    int a=-1,b=1,i=0,n,c;
    printf("enter the value");
    scanf("%d",&n);
    while(i<n)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }

}
