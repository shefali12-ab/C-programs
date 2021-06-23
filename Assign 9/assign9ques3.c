void natur(int);
main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    natur(n);
    getch();
}
void natur(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
