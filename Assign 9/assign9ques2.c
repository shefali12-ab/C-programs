float circum(float);
main()
{
    float r,x;
    printf("Enter the radius\n");
    scanf("%f",&r);
    x=circum(r);
    printf("circumference of circle is %f",x);
}
float circum(float r)
{
    float y;
    y=2*22.0/7.0*r;
    return(y);
}
