float area(float);
main()
{ float r,y;
 printf("Enter the radius");
 scanf("%f",&r);
 y=area(r);
 printf("area of circle is %f",y);

}

float area(float r)
{
    float x;
    x=22.0/7.0*r*r;
    return x;
}
