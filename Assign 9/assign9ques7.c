int check_even_odd(int);
main()
{
    int n,x;
    printf("Enter a number");
    scanf("%d",&n);
    x=check_even_odd(n);
    printf("%d",x);
}
int check_even_odd(int n)
{
    if(n%2==0)
     return(1);
    else

     return(0);
}
