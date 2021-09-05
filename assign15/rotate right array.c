//rotate a array right by k position
#include<stdio.h>
#define size 10
void rotate_array(int b[],int number_of_rotation,int direction,int size1);
void display(int a[],int size2);
int main()
{
    int arr[10]={2,3,4,5,6,7,8,9,23,44},n,dirn;
    //display(arr[size],size);
    printf("enter the number of rotation");
    scanf("%d",&n);
    printf("Enter 1 for right or 0 for left direction ");
    scanf("%d",dirn);
    rotate_array(arr,n,dirn,10);
     display(arr,10);
    /*scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    number of rotation
    printf("enter number of rotation");
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
        t=arr[7];
        for(i=7;i>=1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=t;
    }
    //displaying the rotated array
      for(i=0;i<8;i++)
    {
        printf("%d\n",arr[i]);
    }*/

}
void rotate_array(int b[],int number_of_rotation,int direction,int size1)
{
    int j,i,temp;
    if(direction == 1)
    {
        for(j=0;j<number_of_rotation;j++)
        {
            temp=b[size1-1];
        for(i=size1-1;i>=1;i--)
        {
            b[i]=b[i-1];
        }
        b[0]=temp;
        }

    }
    else
    {
        for(j=0;j<number_of_rotation;j++)
        {
            temp=b[0];
            for(i=0;i<size1;i++)
            {
                b[i]=b[i+1];
            }
            b[size1-1]=temp;
        }
    }
}
void display(int a[],int size2)
{
    int i;
    for(i=0;i<size2;i++)
    {
        printf("%d\n",a[i]);
    }
}



