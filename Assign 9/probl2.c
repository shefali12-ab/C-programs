//program to find largest no. among three numbers
main()
{ int x,y,z;
printf("enter a number");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
    printf("largest number is %d",x);
else
    if(y>z)
    printf("largest number is %d",y);
else
    printf("largest number is %d",z);

}
