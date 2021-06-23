void even_naturl(int);
main()
{
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   even_naturl(n);
}
void even_naturl(int n)
{
    int count=0,i=1;
    while(count<n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            count++;
        }
        i++;
    }
}
