main()
{ int a,b,c,D;
printf("Enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
D=(b*b)-(4*a*c);
if(D>=0)
{
    if(D==0)
       {
        printf("Real and Equal Roots");
        }

    else

       {
        printf("Real and Distinct Roots");
        }


}


else
{
printf("Imaginary Roots");

}

getch();

}
