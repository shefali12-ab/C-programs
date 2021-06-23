void check_armstrong(void);
main()
{
    check_armstrong();
}
void check_armstrong(void)
{
    int x,sum=0,y;
    printf("Enter a number");
    scanf("%d",&x);
     y=x;
    while(x!=0)
    {

     sum=sum+(x%10)*(x%10)*(x%10);
     x=x/10;

    }
      if(y==sum)
       printf("%d is armstrong number",y);
       else
        printf("%d is not a armstrong number",y);
}
