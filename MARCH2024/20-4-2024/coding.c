//isomorpic

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int i;
    char s[100], t[100];
    printf("first string: ");
    scanf("%s",s);
    printf("second string: ");
    scanf("%s",t);
    int s_to_t[256]={0}; 
    int t_to_s[256]={0};
    int len=strlen(s);
    bool isIsomorphic = true;
    for(i=0;i<len;i++)
    {
        char cs=s[i];
        char ct=t[i];
        if(s_to_t[cs] == 0 && t_to_s[ct] == 0) 
        {
            s_to_t[cs] = ct;
            t_to_s[ct] = cs;
        }
        else 
        {
            if (s_to_t[cs] != ct || t_to_s[ct] != cs) {
                isIsomorphic = false;
                break;
            }
        }
    }
    printf("Isomorphic: %s\n", isIsomorphic ? "true" : "false");
}

//find single number

  
#include<stdio.h>
int main() 
{
    int num[100];
    int size,i;
    printf("size of array: ");
    scanf("%d", &size);
    printf("elements of array:\n");
    for(i=0;i<size;i++) 
    {
        scanf("%d",&num[i]);
    }
    int result=0;
    for(i=0;i<size;i++) {
        result ^= num[i];
    }
    printf("single number is: %d\n", result);
}
