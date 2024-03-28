#include <stdio.h>
int main() {
  int num;
  int s1= 0, s2=1;
  int s3 = s1+s2;
  scanf("%d", &num);
  printf("fibonacci series: %d, %d, ", s1,s2);
  for (int i=3;i<= n;i++) {
    printf("%d ",s3);
    s1=s2;
    s2=s3;
    s3=s1+s2;
  }
}
