//this is 2nd part for program to rverse array,here size of array is even number 10 and last index is odd number 9;
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
    int a[10],i,temp,m,n;
  //  scanf("%d",&size);
   input(a,10);
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


        m=(10-1)/2;
        n=10/2;
        //printf("value of j is%d",j);
        for(i=0;i<= m;i++)
        {
            temp=a[m-i];
            a[m-i]=a[n+i];
            a[n+i]=temp;
        }

    printf("after reversing");

display(a,10);
return 0;
}

