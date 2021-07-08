//function to rotate an array towards right by one position
int rotate(int[],int);
main()
{ int a[10];
 rotate(a,10);
}
int rotate(int b[],int size)
{
    int i,temp;
    printf("Enter elements of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    temp=b[size-1];

    for(i=8;i>=0;i--)
    {
        b[i+1]=b[i];
    }
    b[0]=temp;
    printf("After rotation");
       for(i=0;i<size;i++)
    {
        printf("%d\n",b[i]);
    }
}
