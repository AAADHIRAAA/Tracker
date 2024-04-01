// power without pow()

input 
2 (base)
3 (power)

output
8
########################
#include<stdio.h>
int main()
{
    int base,pow,ans=1;
    scanf("%d%d",&base,&pow);
    while(pow!=0) {
        ans=ans*base;
        pow--;
    }
    printf("%d",ans);
}

// lucky number (sum of all odd digits should be even)
input 351
output  not lucky
reason (3+5+1)=9 (which is odd)

input 211
ouput " lucky " 
  (1+1 ===== 2 (which is even))

  ##############################
  
#include<stdio.h>
int main(){
    int num,digit,sum;
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        if(digit%2!=0){
            sum+=digit;
        }
        num/=10;
    }
    if(sum%2==0){
        printf("lucky number");
    } 
    else{
        printf("not lucky number");
    }
}
