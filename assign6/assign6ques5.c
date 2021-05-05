//program to check number is coprime or not
main()
{
    int a,b,min,i;
    printf("Enter a number");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    for(i=2;i<=min;i++)
    {
     if(a%i==0&&b%i==0)
      {
       break;
      }
    }
    if(i==min+1)
    {
        printf("%d,%d is co-prime number",a,b);
    }
    else
    {
        printf("%d,%d is not co-prime number",a,b);
    }
}
