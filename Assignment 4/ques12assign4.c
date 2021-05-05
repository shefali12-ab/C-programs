main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",2*(n-1)+1);
        n--;
    }
    getch();
}
