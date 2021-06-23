int fact(int);
main()
{
    int n,x;
    printf("Enter a number");
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);

}
int fact(int n)
{
    int fact1=1;
    while(n>=1)
    {
        fact1=n*fact1;
        n--;
    }
}
