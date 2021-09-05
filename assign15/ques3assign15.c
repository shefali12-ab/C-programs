//function to captalize a string
#include<string.h>
#include<stdio.h>
void capatilize(char[]);
int main()
{
    char s[50];
    gets(s);
    capatilize(s);
}
void capatilize(char b[])
{
    int i;
    for(i=0;b[i];i++)
    {
        if(i==0)
        {
            if(b[i]>=97&&b[i]<=122)
                b[i]=b[i]-32;
        }
        else{
            if(b[i]>=65&&b[i]<=90)
                b[i]=b[i]+32;
        }
    }
    printf("%s",b);
}
