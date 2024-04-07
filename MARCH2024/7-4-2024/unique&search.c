//unique element in a array
#include<stdio.h>
int main(){
    int n,i,uniq=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
          uniq ^=arr[i];
    }
    printf(" %d", uniq);
}
// linear search

#include<stdio.h>
int main(){
    int n,i,key,ind=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i< n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(arr[i]==key){
            ind=i;
            break;
        }
    }
    if(ind!=-1) {
        printf("element found at index %d\n",ind);
    }
    else{
        printf("element not found\n");
    }
}

//binary search
#include<stdio.h>
int main(){
    int n,i,key;
    scanf("%d",&n);
    int l=0,r=n-1,mid;
    int arr[n];
    for(i =0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
  
    while(l<=r){
        mid=l+(r -l)/2;
        if(arr[mid]==key){
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid]<key) {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
  
    printf("Element not found\n");

}
