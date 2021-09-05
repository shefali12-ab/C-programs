//function to count occurence of given character in a given string
#include<string.h>
#include<stdio.h>
void count_occurence(char[],char);//declaration
int main()
{
    char s[100];
    char ch;
    gets(s);
    scanf("%c",&ch);
    count_occurence(s,ch);
}
void count_occurence(char b[],char ch1)//defenition
{
    int count=0,i;
    for(i=0;b[i];i++)
    {
        if(ch1==b[i])
            count++;

    }
    printf("%d",count);
}
