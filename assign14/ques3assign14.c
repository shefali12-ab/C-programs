//program to calculate length of string using strlen function
#include<stdio.h>
int strlen(char*);//declaration of predefined function strlen
main()
{
    int x;
    //char s[12]="BHOPAL";
    //x=strlen("BHOPAL");
    char s[12];
    gets(s);
    x=strlen(s);
    printf("%d",x);

}
