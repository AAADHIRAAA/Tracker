//diamond star pattern
  
#include<stdio.h>
int main(){
    int n,i,j,space;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(space= 1;space <=n-i;space++)
        {
            printf(" ");
        }
        for(j =1;j<=2*i- 1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1; i--) {
        for(space=1;space<=n-i;space++) 
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
  
#include<stdio.h>
int main(){
    int n,i,j,space;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(space= 1;space <=n-i;space++)
        {
            printf(" ");
        }
        for(j =1;j<=2*i- 1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1; i--) {
        for(space=1;space<=n-i;space++) 
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

//vowel or consonant

input : 
a

output : 
vowel

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }
}
