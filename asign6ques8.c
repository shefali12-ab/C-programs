//program to calculate HCF of two numbers
main()
{
 int a,b,min;
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 for(min=a<b?a:b;min>=1;min--)
 {
     if(a%min==0&&b%min==0)
     {
         printf("HCF is %d",min);
         break;
     }
 }

}
