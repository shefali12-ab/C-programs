int prime_number(int);
int x,y;//here need of global declaration for our code.
main()
{
    int z;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        z=y+1;
        prime_number(z);


    }
    else
    {
        z=x+1;


      prime_number(z);


    }
}
int prime_number(int z)
{
   int i;
   while(z<x||z<y)
   {


    for(i=2;i<z;i++)
    {
        if(z%i==0)
        {
            z++;
            break;
        }

    }
    if(i==z)
        {
            printf("%d\n",z);
            z++;
        }

   }
}
