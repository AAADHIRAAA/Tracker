//binary to octal
#include<stdio.h>
int main()
{   
    long int bin,oct=0;
    int i,rem;
    i =1;
    scanf("%ld",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        oct= oct+rem*i;
        i=i* 2;
        bin= bin/10;
    }
    printf("%lo",oct);
}

//octal to bianry

#include<stdio.h>
#include<math.h>
int main()
{
    int i,oct,deci= 0;
    long bin=0;
    i=0;
    printf("Enter octal num= ");
    scanf("%d",&oct);
    while(oct!=0)
    {
        deci=deci+(oct% 10)*pow(8,i);
        i++;
        oct=oct/10;
    }
    i=1;
    while(deci!= 0)
    {
        bin+=((deci%2)*i);
        deci=deci/2;
        i=i*10;
    }
    printf("%ld",bin); 
}
