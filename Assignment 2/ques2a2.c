main()
{ int x,y;
 printf("Enter two integers x and y");
 scanf("%d%d",&x,&y);
 x=*&y;
 //y=*&;
 printf("after swaping x=%d,y=%d",x,y);

}
// this is wrong method
