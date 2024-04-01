// Reverse a String
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int l = strlen(str);
  int i=0,j=len-1;
	for (i =0, j= len-1;i <= j;i++,j--) {
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	printf("%s",str);
}

//Factorial Calculation

#include<stdio.h>
int main(){
    int num,i=1;
    int factorial = 1;
    scanf("%d",&num);
    if (num < 0)
        return -1;
    else {
        for (i=1;i<= num;i++) {
            factorial *= i;
        }
        printf("factorial of %d is %d",num,factorial);
    }
}
