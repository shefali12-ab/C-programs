

int main()
{
    int T,M,P,E,i;
   scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d",&M,&P,&E);
        if(M>40&&P>=35&&E>60)
        printf("A\n");
    else
        if(M>40&&E>60)
        printf("B\n");
    else
        if(P>=35&&E>60)
        printf("C\n");
    else
        if(M>40&&P>=35)
        printf("D\n");
        else if (M>40||P>=35||E>60)
        printf("E\n");

    else
        printf("F\n");



    }



}
