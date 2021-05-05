main()
{   float x,y,z;
    int u;
    printf(" Enter the length of three sides\n");
    scanf("%f%f%f",&x,&y,&z);

    if( x+y>=z && y+z>=x && z+x>=y)
    {

    printf(" 1.Check for isosceles triangle\n");
    printf(" 2.Check for right angled triangle\n");
    printf(" 3.Check for equilateral triangle\n");
    printf(" 4.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&u);
    switch(u)
    {
    case 1 :
        if(x==y||y==z||z==x)
        {
            printf("Triangle is isosceles");

        }
        else
        {
            printf("Triangle is not isosceles");

        break;
         case 2 :
        if(x*x+y*y==z*z||y*y+z*z==x*x||z*z+x*x==y*y)
        {
            printf("Triangle is right angled ");

        }
        else
        {
            printf("Triangle is not right angled");
        }
         break;
        case 3 :
        if(x==y && y==z && z==x)
        {
            printf("Triangle is equilateral ");

        }
        else
        {
            printf("Triangle is not equilateral");
        }
         break;
        case 4 :

            exit(0);
    }
    }
    }
    else
    {
        printf("Entered length are not side of a triangle");
    }
    }






