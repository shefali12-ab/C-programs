main()
{   int i;
    float x,y;
   while(1)
   {
      printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice");
    scanf("%d",&i);


    switch(i)
  {
      case 1:
           printf("Enter two numbers\n");
   scanf("%f%f",&x,&y);
   printf("Addition is %f\n",x+y);
   break;
     case 2:
          printf("Enter two numbers\n");
   scanf("%f%f",&x,&y);
   printf("Subtraction is %f\n",x-y);
   break;
     case 3:
          printf("Enter two numbers\n");
        scanf("%f%f",&x,&y);
   printf("Multiplication is %f\n",x*y);
   break;
    case 4:
          printf("Enter two numbers\n");
   scanf("%f%f",&x,&y);
   printf("Division is %f\n",x/y);
   break;
     default:
        exit(0);
  }
   }

  getch();

}
