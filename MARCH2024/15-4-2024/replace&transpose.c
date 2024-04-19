//replace all 0 by 1

#include<stdio.h>
int main()
{
    int num,ans=0,prod=1,t;
    scanf("%d",&num);
    while(num!=0)
    {
        t=num%10; 
        if(t==0)
        {
           ans+=1 *prod;
        } else
        {
            ans+=t*prod;
        }
        num/=10; 
        prod*= 10;
    }
    printf("after replacing :  %d\n",ans);
}

//transpose matrix

#include<stdio.h>  
int main()
{  
    int r,c,i,j;  
    scanf("%d",&r);  
    scanf("%d",&c);  
    int m[r][c];  
    for(i=0;i<r;i++){  
        for(j=0;j<c;j++){  
            scanf("%d",&m[i][j]);  
        }  
    }  
    for(i=0;i<r;i++){  
        for(j=0;j<c;j++){  
            int temp=m[i][j];  
            m[i][j]=m[j][i];  
            m[j][i]=temp;  
        }  
    }  
    for(i=0;i<c;i++){  
        for(j=0;j<r;j++){  
            printf("%d ",m[i][j]);  
        }  
        printf("\n");  
    }  
} 
