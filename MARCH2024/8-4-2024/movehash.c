/*2.You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.

Input:

Move#Hash#to#Front

Output:
###MoveHashtoFront*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter the string:");
    scanf("%[^\n]",s);
    int i,c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='#')
        {
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("#");
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='#')
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}
