//leap
#include<stdio.h>
int main()
{
    int ak;
    scanf("%d",&ak);
    if((ak%400==0) || (ak%4==0 && ak%100!=0))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
//hcf

#include<stdio.h>
int main() {
    int n1,n2,i,hcf;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++) {
        if (n1%i==0 && n2%i ==0)
            hcf=i;
    }
    printf("HCF is %d\n",hcf);
}
