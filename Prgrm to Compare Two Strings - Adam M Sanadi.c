#include<stdio.h>
#include<string.h>
int main()
{
      char arr1[200],arr2[200];
      printf("Enter the first string:\n");
      gets(arr1);
      printf("Enter the second string:\n");
      gets(arr2);
      printf("Entered strings are \narr1=%s\narr2=%s\n",arr1,arr2);
      if(strcmp(arr1,arr2)==0)
      {
            printf("Entered strings are equal\n");
      }
      else
      {
            printf("Entered strings are not equal\n");
      }
}