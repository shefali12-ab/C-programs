//program to reverse array here this program works when array size is odd number like 11 and so that last index is even like 10;
int input(int b[],int size1)
{ int i;
     for(i=0;i<size1;i++)
    {
        scanf("%d",&b[i]);

    }
}
int display(int c[],int size2)
{ int i;
       for(i=0;i<size2;i++)
    {
        printf("%d\n",c[i]);

    }
}

int main()
{
    int a[11],i,j,temp;
  //  scanf("%d",&size);
   input(a,11);
    /*if((10-1)%2)
    {
        j=(size/2.0)+1;
        for(i=0;i<=j;i++)
       {
           temp=a[j+i];
        a[j+i]=a[j+(i+1)];
        a[j+(i+1)]=temp;
       }
    } */


        j=(11-1)/2;
        printf("value of j is%d",j);
        for(i=1;i<=j;i++)
        {
            temp=a[j+i];
            a[j+i]=a[j-i];
            a[j-i]=temp;
        }

    printf("after reversing");

display(a,11);
return 0;
}
