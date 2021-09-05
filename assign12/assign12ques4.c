//function to find index of smallest element in the array
void smallest(int[],int);
main()
{
    int a[4];
    //scanf("%d",&size);
    smallest(a,4);
}
void smallest(int b[],int size1)
{
   int i,j,min,index;
   for(i=0;i<size1;i++)
   {
       scanf("%d",&b[i]);
   }

        /*for(i=0;i<size1;i++)
        {
            for(j=i+1;j<size1;j++)


            {

                if(b[i]<b[j])
                {
                    if(j==size1-1)
                        printf("smallest index is %d",i);
                }
                else if(i==j)
                {

                if(b[i]<b[j])
                {
                    if(j==size1-1)
                        printf("smallest index is %d",i);
                }
                }
            }
            }
        }*/
        min=b[0];
        index=0;
        for(j=1;j<size1;j++)
        {
            if(b[j]<min)
            {
                min=b[j];
                index=j;
            }

        }
        printf("smallest index is %d",index);

}
