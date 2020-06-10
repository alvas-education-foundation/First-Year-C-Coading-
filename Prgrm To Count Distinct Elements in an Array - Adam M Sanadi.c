#include<stdio.h>
int main()
{
    int a[20],i,j,n,count=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
            break;
        }
        if(i==j)
        {
            count++;
        }
    }
    printf("The count of distinct element in the array is %d\n",count);
}