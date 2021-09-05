//program to count vowels in each of the string when 8 strings are stored in a two dimensional char array also print the total number of vowels
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,count;
    char s[8][20];
    for(i=0;i<8;i++)
    {
        gets(&s[i][0]);

    }
    for(i=0;i<8;i++)
    {    count=0;
        for(j=0;j<20;j++)
        {
            if(s[i][j]=='a'||s[i][j]=='A'||s[i][j]=='e'||s[i][j]=='E'||s[i][j]=='i'||s[i][j]=='I'||s[i][j]=='o'||s[i][j]=='O'||s[i][j]=='u'||s[i][j]== 'U' )
            {
                count++;
            }
        }
        printf("number of vowels in %s is %d",s[i],count);
    }
}
