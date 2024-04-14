//gcd
#include<stdio.h>
int gcd(int a, int b)
{
	if (a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
    int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}

//palindrome 

#include<stdio.h>  
int main()    
{    
int n,r,sum,t;    
scanf("%d",&n);    
t=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(t==sum)    
printf("palindrome number");    
else    
printf("not palindrome");   
}
