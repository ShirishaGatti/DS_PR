#include <stdio.h>
int main()
{
int n,temp,i,j;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter the %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n-1-i;j++)
  {
  if(arr[j]>arr[j+1])
      {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
      }
  }
}
printf("Sorted list is:");
for(i=0;i<n;i++)
{
printf("[%d] ",arr[i]);
}
printf("\n");
return 0;
}

