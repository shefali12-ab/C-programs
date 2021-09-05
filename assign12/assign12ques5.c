//function to print distinct element of array
void distinct(int [],int);
 main()
{   int size;
scanf("%d",&size);
    int a[size];
    distinct(a,size);
}
void distinct(int b[],int size1)
{
    int i,j;
   for(i=0;i<size1;i++)
   {
       scanf("%d",&b[i]);
   }


   for(i=0;i<size1;i++)
   {

       for(j=0;j<=i;j++)
       {
           if(b[i]==b[j])
           break;

       }
       if(i==j)
        printf("%d",b[i]);
   }
}
//printf("%d",b[0]);
   /*for(j=1;j<size1;j++)
   {   count=0;
       for(i=0;i<j;i++)

       {
            while(count!=1)
             {if(b[j]!=b[i])
               {
                   printf("%d\n",b[j]);
                    count++;

               }
               else

                    break;

            }



       }
   }*/
