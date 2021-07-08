// program to sort an array of size 10
main()
{
    int a[10],i,j,x;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }

//printf("array after sorting");
    for(j=0;j<10;j++)
    {
        for(i=0;i<9;i++)
        {
             if(a[i]<a[i+1])
            {
               x=a[i];
               a[i]=a[i+1];
               a[i+1]=x;
            }

        }

    }
    printf("array after sorting in ascending order is\n");

     for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);

    }
}
