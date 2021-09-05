//function to find index of first occurence of a given character in a given string
#include<string.h>
#include<stdio.h>
void index_count(char[],char);
int main()
{
    char s[100];
    char ch;
    gets(s);
    scanf("%c",&ch);
    index_count(s,ch);
}
void index_count(char b[],char ch1)
{
    int count=0,i;
    for(i=0;b[i];i++)
    {
        if(ch1==b[i])
        {
            break;
        }
    }
    printf("index of first occurence of a given character %c is %d",ch1,i);
}
