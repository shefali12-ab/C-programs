main()
{ int a,b,c;
printf("Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if( a>b&&a>c)
{ printf("greater number is %d",a); }
else
{
  if(b>a&&b>c)
  { printf("greater number is %d",b);}
else
{ if(c>a&&c>b)
  printf(" greater number is %d",c);}
}

getch();





}
