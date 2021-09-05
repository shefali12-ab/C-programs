//program to find given pattern in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str1[20];
    char str2[10];
    printf("enter a string");
    gets(str1);
    printf("enter a pattern");
    gets(str2);
    l=strlen(str2);
    for(i=0;str1[i];i++)
    {
        for(j=0;str2[j];j++)
        {
            if(str1[i]!=str2[j])
                break;
            else
                i++;
        }
        if(str2[j]=='\0')
            break;
    }
    if(l==j)
        printf("given string %s has given pattern %s",str1,str2);
    else
            printf("given string %s does not have given pattern %s",str1,str2);

  return 0;

}
