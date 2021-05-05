main()
{ int x,y,z;
 printf("Enter two integers x and y");
 scanf("%d%d",&x,&y);
 printf("The integers are x=%d,y=%d",x,y);
 z=x;
 x=y;
 y=z;
 printf("after swaping x=%d,y=%d",x,y);

}
