main()
{ int i,j;

for(j=1;j<=4;j++)
{

    for (i=1;i<=4;i++)
{
           if(j<=5-i)
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
