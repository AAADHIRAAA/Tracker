pattern 1: 
   
       * 
      * *   
    * * *    
         
pattern 2: 
*
* *
* * *
         
pattern 3: 
 *  *  *  *  *
    *  *  *
       * 
  pattern 4:
 * * * *
   * * *
     * *
       *
         
#include <stdio.h>  
int main()  
{   
    int n,i,j,k,s=1;  
    scanf("%d",&n);   
    printf("pattern 1");

    for(i=1;i<=n;i++)   
    {  
        for(j=i;j<n;j++)  
        {  
            printf(" ");   
        }  
        for(k=1;k<=i;k++)  
        {  
            printf("*");
        }  
        printf("\n");   
    }  

  printf("pattern 2");

  for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

  printf("pattern 3");

    for(i=n;i>=1;i--)  
    {  
        for(j=1;j<=s;j++)  
        {  
            printf("  ");
        }  
        for(k=1;k<=(2*i-1);k++)  
        {  
            printf("* ");
        }  
        s++;  
        printf("\n");  
    }  

  printf("pattern 4");

   for(i=0;i<4;i++) 
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=0;k<4-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

