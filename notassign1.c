//Two numbers are input through keyboard ,write a program to interchange content of C and D.
main()
{
    float C,D,Z;
    printf("Enter a number");
    scanf("%f%f",&C,&D);
     printf("C=%f\nD=%f",C,D);
     Z=C/D;
    //printf("%f",Z);
    C=(1/Z)*C;
    D=Z*C;
    printf("C=%f\nD=%f",C,D);
    getch();

}
