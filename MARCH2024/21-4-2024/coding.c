//min max
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int max=((a+b) + abs(a-b))/2;
    int min =((a+b) - abs(a-b))/2;
    printf("Max: %d\n",max);
    printf("Mini: %d\n",min);
}

//simple calculator

#include<stdio.h>
int main()
{
    char op;
    double n1,n2,result;
    printf("nter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);
    switch (op) {
        case '+':
            result=n1+n2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result=n1-n2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result=n1*n2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (n2!=0) 
            {
                result=n1/n2;
                printf("Result: %.2lf\n", result);
            } 
            else 
            {
                printf("division by zero Error! .\n");
            }
            break;
        default:
            printf("Invalid operator Error! .\n");
    }
}
