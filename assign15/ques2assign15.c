//program to write a function to count vowels in a given string
#include<string.h>
#include<stdio.h>
void count_vowels(char[]);
void main()
{
    char s1[50];
    gets(s1);
    count_vowel(s1);
}
void count_vowel(char b[])
{
   int i,count=0;
   for(i=0;b[i];i++)
   {
       if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
        count++;
   }
   printf("number of vowels in string is %d",count);
}
