//rotate integer array by left or right by kth position
void rotate_array(int b[],int size,int rotation ,int dirn);
void display(int c[], int size);
#include<iostream>
using namespace std;
int main()
{
    int a[10]={10,20,30,40,50,66,77,88,99,11},k,direction;
    cout<<"Enter the number of rotation and 1 for right direction 0 for left direction";
    cin>>k>>direction;
    rotate_array(a,10,k,direction);
    display(a,10);
}
void rotate_array(int b[],int size,int rotation ,int dirn)
{  int i,temp,j;
    //for right direction rotation
    if(dirn==1)
    {
        for(i=0;i<rotation;i++)
        {   temp=b[size-1];
            for(j=size-1;j>=1;j--)
            {
                b[j]=b[j-1];
            }
            b[0]=temp;
        }
    }
    else
    {
        for(i=0;i<rotation;i++)
        {
            temp=b[0];
            for(j=0;j<=size-1;j++)
            {
                b[j]=b[j+1];
            }
            b[size-1]=temp;
        }
    }
}
void display(int c[], int size)
{
    int i;
    for(i=0;i<=size-1;i++)
    {
        cout<< c[i] << endl;
    }
}
