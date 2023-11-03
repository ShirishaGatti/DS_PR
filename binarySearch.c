#include<stdio.h>
int binarySearch(int [],int,int );
void main(){
	int dataArray[10]={8,59,47,92,292,8,0,5,6,7,7};
	int size=sizeof(dataArray)/sizeof(int);
	int value;
	printf("Enter value to search :");
	scanf("%d",&value);
	int status=binarySearch(dataArray,size,value);
	printf("%d ",status);
	if(status==-1)
     printf("value not found ");
	else           
	printf("value found at %d ",status);
		
}
	                      
int binarySearch(int dataArray[],int size,int value){
	int low,mid,high;
	low=0;
	high=size;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(dataArray[mid]==value)
		 return mid;
		if(dataArray[mid]<value)
		 low=mid+1;
		else
		 high=mid-1;
	}

}