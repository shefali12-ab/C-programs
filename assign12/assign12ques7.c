void meandev(int[],int);
int abs(int x);
main()
{
    int a[10];
    meandev(a,10);
}
void meandev(int b[],int size)
{
    int i;

    float mean,sum=0,sum1=0,meandev;
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
        sum+=b[i];

    }
    mean=sum/size;
    printf("%f\n",mean);
    for(i=0;i<size;i++)
    {
        sum1+= abs(b[i]-mean);

    }
    printf("%f",sum1);
    meandev=sum1/size;
    printf("%f",meandev);
}
