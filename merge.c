#include<stdio.h>
#define MAX 100
int mergesort(int[],int,int);
int merge(int[],int,int,int);
int main()
{
   int i,low=0,n,high;
   int a[MAX];
   printf("enter the size:-");
   scanf("%d",&n);
   high=n-1;
   printf("enter array elements:-");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   mergesort(a,low,high);
   printf("sorted array elements:-");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
  return 0;
}
int mergesort(int srt[10],int low,int high)
{
   int mid;
    if(low<high)
      {
        mid=(low+high)/2;
        mergesort(srt,low,mid);
        mergesort(srt,mid+1,high);
        merge(srt,low,mid,high);
      }
  
}
int merge(int srt[10],int low,int mid,int high)
{
     int i,j,k;
     int b[10];
     i=low;
     k=low;
     j=mid+1;
     while(i<=mid && j<=high)
 	{
		if(srt[i]<srt[j])
		{
			b[k]=srt[i];
			i++;
			k++;
		}
		else
		{
			b[k]=srt[j];
			j++;
			k++;
		}
	}
     		if(i>mid)
		{
			while(j<=high)
			{
				b[k]=srt[j];
				j++;
				k++;
			}
		}
		else
		{
			if(i<=mid)
			{
				while(i<=mid)
				{
					b[k]=srt[i];
					i++;
					k++;
				}
			}
		}
		for(k=low;k<=high;k++)
		{
			srt[k]=b[k];
		}
//	return 1;
}


     
   

