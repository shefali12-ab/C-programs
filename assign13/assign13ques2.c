//program to calculate product of two matrix
#define row 3
#define col 3

void matrix(int arr[row][col])
{ int i,j;

      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    display(arr);

}
void product(int a[row][col],int b[row][col])
{
    int c[row][col],i,j,k,sum;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        { sum=0;
            for(k=0;k<3;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                    c[i][j]=sum;
                }

        }

        printf("\n");
    }
    display(c);
}
void display(int array[row][col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int a[row][col],b[row][col];
    printf("enter nine elements of first matrix\n");
 matrix(a);
 printf("enter nine elements of second matrix\n");
 matrix(b);
 printf("product of two matix \n");
 product(a,b);

}

