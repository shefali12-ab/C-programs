//program to find grades of student

main()
{
    int n;
    printf("enter the marks obtained\n");
    scanf("%d",&n);
    if(n>=75)
        printf("Excellent");
    else
        if(n>=60&&n<75)
        printf("Good");
    else
        if(n>=33&&n<60)
        printf("Average");
    else if(n<33)
        printf("Poor");
}
