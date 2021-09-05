//function to check wheter given string is palindrome or not
#include<stdio.h>
#include<string.h>
int check_palindrome(char[],char[]);
int main()
{
    char s1[100];
    char s2[100];

    gets(s1);
    strcpy(s2,s1);
    check_palindrome(s1,s2);


}
int check_palindrome(char b1[],char b2[])
{
 int len,x,i,temp;
   len=strlen(b1);
    for(i=0;i<len/2;i++)
    {
       temp=b1[i];
       b1[i]=b1[len-1-i];
       b1[len-1-i]=temp;
    }
    puts(b1);
    x=strcmp(b1,b2);
    if(x==0)
        printf("string is palindrome");
    else
        printf("strings are not palindrome");

}
