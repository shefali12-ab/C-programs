//program to convert string into lowercase
#include<string.h>
main()
{
    int i;
    char s[20];
    char x;
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            x=s[i]+32;
            printf("%c",x);
        }
        else
            if(s[i]>=97&&s[i]<=122)
        {
            printf("%c",s[i]);
        }
    }
}
