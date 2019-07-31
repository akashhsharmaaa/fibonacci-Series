//fibonacci series    AKASH SHARMA
#include <stdio.h>
int main(void)
{
int n,n1=1,n2=1,temp;
printf("enter a number");
scanf("%d",&n );
printf("%d ",n1);
printf("%d ",n2);
for (size_t i = 0; i < n; i++) {
  temp=n2;
  n2=n1;
  n1=n1+temp;
  printf("%d ", n1);
}
}
