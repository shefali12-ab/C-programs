//program to find LCM of two numbers
main()
{
    int a,b,max,flag=0;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(max=a>b?a:b;flag!=1;max++)
    {
        if(max%a==0&&max%b==0)
        {
            printf("%d",max);
            flag=1;
        }
    }
}
