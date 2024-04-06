// 1.Program to calculate distance between two points
//      input:
//          (x1,y1)=(3,4)    (x2,y2)=(7,7)
//      output:
//           5
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,ans;
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    ans = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("%d",ans);
}

// 2.write a program to print the non repeated characters in the string.
//     input:
//        character
//     output:
//         h t e

#include<stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i=0,j=0,f=0;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
    	f=0;
     	for(j=0;j<strlen(str);j++)
        {
        	if(str[i]==str[j])
        	      f++;
        	if(f>1)  break;    
        }
        if(f==1)
        {
          printf("%c ",str[i]);
        }
    }
}
