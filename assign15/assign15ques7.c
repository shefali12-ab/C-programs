//function to check whether string is alphanumeric or not
#include<string.h>
#include<stdio.h>
void alphanumeric_check(char[]);
int main()
{
    char str[100];
    gets(str);
    alphanumeric_check(str);

}
void alphanumeric_check(char b[])
{
    int i,j;
    for(i=0; b[i]; i++)
    {
        if(b[i]>=65&&b[i]<=90||b[i]>=97&&b[i]<=122||b[i]>=48&&b[i]<=57)
        {

            if(b[i]>=65&&b[i]<=90||b[i]>=97&&b[i]<=122)
            {
                i++;

                if(b[i]>=48&&b[i]<=57)
                {
                    printf("given string is alphanumeric");
                    break;
                }
                else
                {
                    printf("given string is not alphanumeric");
                    break;
                }

            }
            if(b[i]>=48&&b[i]<=57)
            {

                i++;
                if(b[i]>=65&&b[i]<=90||b[i]>97&&b[i]<=122)
                {
                    printf("given string is alphanumeric");
                    break;
                }
                else
                {
                    printf("given string is not alphanumeric");
                    break;
                }

            }

        }
    }

}
