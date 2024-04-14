//flyod
#include<stdio.h>  
int main()  
{  
    int num,i,j,k=1;   
    scanf("%d",&num);  
    for(i =1;i<=num;i++)  
    {  
        for(j =1;j<=i;j++)  
        {  
            printf("%d ",k++);
        }  
        printf( "\n");  
    }     
}  

//pascal
  
#include<stdio.h>
int main(){
    int num,c= 1,space,i,j;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (space=1; space<=num-i;space++)
            printf("  ");
        for (j=0;j<=i;j++) {
            if (j==0 || i==0)
                c=1;
            else
                c= c*(i-j+1)/j;
            printf("%4d",c);
        }
        printf("\n");
    }
}
