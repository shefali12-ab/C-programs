main()
{
    int x;
    printf("number 1 for Monday\n");
    printf("number 2 for Tuesday\n");
    printf("number 3 for Wednesday\n");
    printf("number 4 for Thrusday\n");
    printf("number 5 for Friday\n");
    printf("number 6 for Saturday\n");
    printf("number 7 for Sunday\n");
    printf("Enter your choice for day number of week\n");
    scanf("%d",&x);

    switch(x)

    {
           case 1:

        printf("Have a wonderful Day");
        break;
            case 2:

        printf("Keep going strong little fighter");
        break;
            case 3:

        printf("You are Strong");
        break;
            case 4:

        printf("You are your own sunshine");
        break;
            case 5:

        printf("Get up, and work");
        break;
            case 6:

        printf("Self-belief is the Key");
        break;
            case 7:

        printf("You are awesome");
        break;
            default :
                printf("Invalid");

    }

}
