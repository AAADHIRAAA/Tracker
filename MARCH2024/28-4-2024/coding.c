//sum of subsets


#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(j=0;j<n;j++) 
        {
            if(i&(1<<j))
            {
                sum+=arr[j];
            }
        }
        printf("%d ",sum);
    }
}

//is two number equal without bitwise operator

#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if (n1-n2 == 0)
    {
        printf("two numbers are equal.\n");
    } 
    else 
    {
        printf("two numbers are not equal.\n");
    }
}
