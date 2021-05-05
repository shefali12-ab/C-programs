main()
{ int x;
    while(1)
    {
     printf("EnTER THE MONTH NUMBER\n");
    scanf("%d",&x);


    switch(x)
   {
    case 1 :
    printf("Number of days are 31");
    break;
    case 2 :
    printf("Number of days are 28 or 29");
     break;
    case 3 :
    printf("Number of days are 31");
     break;
    case 4 :
    printf("Number of days are 30");
     break;
    case 5 :
    printf("Number of days are 31");
     break;
    case 6 :
    printf("Number of days are 30");
     break;
    case 7 :
    printf("Number of days are 31");
     break;
    case 8 :
    printf("Number of days are 31");
     break;
    case 9 :
    printf("Number of days are 30");
     break;
    case 10 :
    printf("Number of days are 31");
     break;
    case 11 :
    printf("Number of days are 30");
     break;
    case 12 :
    printf("Number of days are 31");
     break;
    case 13:
     exit(0);
    default :
    printf("Invalid");

   }
    }

}
