//program to count occurence of given character in a string
#include<string.h>
main()
{
    int i,count=0;
    char x;
    char s[20];
    gets(s);// to take string as input
    printf("Enter the character whose occurence you need to find in a string you entered");
    scanf("%c",&x);//taking given character
    //char s[20]="BHOPALBBL";
   // printf("Enter the string");
    //gets(s);
    //let given charcter be B in Bhopal
    for(i=0;s[i];i++)
    {
        if(s[i]==x)
        count++;
    }
    printf("occurence of given character is %d",count);
}
