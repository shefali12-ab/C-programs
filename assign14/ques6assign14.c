//program to reverse string without using sttrev function
#include<stdio.h>
main()
{
    int i,l=0/*length*/,j;
    char s[20];
    gets(s);
    char x;

    for(l=0;s[l];l++);//loop for calculatig length of the string



    //in this program we are considering length of string to be a odd number



        for(i=0;i<l/2;i++)
        {
           x=s[i];
           s[i]=s[l-1-i];
           s[l-1-i]=x;
        }
        printf("%s",s);


}
