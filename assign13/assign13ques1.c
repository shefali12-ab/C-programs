//program to calculate sum of two matrices each of order 3x3
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
void add(int a[row][col],int b[row][col])
{
    int c[row][col],i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t");
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
 printf("sum of two matix \n");
 add(a,b);

}
