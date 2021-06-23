int next_prime(int);
main()
{ int n,x,y;
printf("Enter a number");
scanf("%d",&n);
y=n+1;
x=next_prime(y);
printf("%d",x);


}
int next_prime(int y)
{
    int i,count=0;
    while(count!=1)
    {
        for(i=2;i<y;i++)
        {
            if(y%i==0)
                break;

        }
        if(i==y)
        {return(y);
        count++;
        }
          else
            y++;

    }
}
