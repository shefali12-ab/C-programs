main()
{ float principal,rate,time;
 printf("Enter the value of principal,rate and time\n");
 getch();
 scanf("%f%f%f",&principal,&rate,&time);
 printf("Simple interest is %f",principal*rate*time/100.0);
 getch();
}
