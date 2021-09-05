//program to calculate length of string without using strlen function
#include<string.h>
main()
{
    char s[20];
    int i,length=0;
    gets(s); //here if we write shefali space kanojia it will display lenght 15
    //scanf("%s",s);
    for(i=0;s[i];i++)
    {
        length++;
    }
    printf("length of string is %d",length);

}
