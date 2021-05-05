main()
{
int x1,x2,x3,x4,x5,total;
float D;
printf("Enter the marks of the student out of 100 ");
scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
D = (x1+x2+x3+x4+x5)/500.0*100.0;
printf("marks in all subject is %d",x1+x2+x3+x4+x5);
printf("percentage is %f",D);
if(D<50)
{
    printf("Fail");

}
else
{   if(50<=D<=60)
   {
  printf("Pass and III division");
   }
   else
   {
       if(60<D<=80)
       {
           printf("Pass and II division");
       }
       else
       {
           if(80<D<=100)
           {
              printf("Pass and I division");
           }
       }
   }

}
getch();


}
