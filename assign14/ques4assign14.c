//program to convert string into uppercase
//here we have taken string input from user
//bHoP string is converted into BHOP through this program
#include<string.h>
main()
{ int i;
    char x;
    char s[20];
    gets(s);
    //printf("%s",s);
// char s[20]="bhopal";
 //char x;
 //x=s[0]+32;
 printf(" string after conversion in uppercase");
 for(i=0;s[i];i++)
 {
     if(s[i]>=97&&s[i]<=122) //when user enters lower case letter
     {
          x=s[i]-32;
     printf("%c",x);
     }
     else //when user enters lower case letter
        if(s[i]>=65&&s[i]<=90)
     {
         printf("%c",s[i]);
     }

 }
/* printf("%c",s[1]);
 x=s[1]-32;
 printf("%c",x);*/

}
