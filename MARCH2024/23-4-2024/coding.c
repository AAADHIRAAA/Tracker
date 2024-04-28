//min max of array

#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,mn,mx;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mn=arr[0];
    mx=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
    }
    printf("max element is %d\n",mx);
    printf("min element is %d",mn);
}
//sorting- first half of array in ascending remaining descending

#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2-1;i++) 
    {
        for(j=0;j<n /2-i-1;j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=n/2;i<n-1;i++)
    {
        int max=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max]) 
            {
                max=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    printf("Sorted array : ");
    for(i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
