main()
{   float k,r;

    printf("Enter the value of radius");
    scanf("%d",&r);
    k=area(r);
    printf("%f",k);
}
   area(r)
{
    float pie=3.14,s;
    s=pie*r*r;
    return(s);
}
