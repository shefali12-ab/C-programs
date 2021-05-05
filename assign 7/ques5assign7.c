main()
{  int i,j;
for(i=1;i<=4;i++)
{
     for(j=1;j<=7;j++)
     {   if(5-i<=j&&j<=i+3)
         {
           printf("*");
        }
        else
        {
            printf(" ");
        }

     }
 printf("\n");
}


   getch();
}
