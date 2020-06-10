#include<stdio.h>
int main()
{
      int n,i=1,sum=0;
      printf("Enter the value of n:\n");
      scanf("%d",&n);
      while(i<=n)
      {
            sum=sum+i*i;
            i++;
      }
      printf("Sum of squares of numbers is %d\n",sum);
}