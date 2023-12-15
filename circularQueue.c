#include<stdio.h>
int enqueue(int [],int,int,int*,int*);
int dequeue(int[],int,int*,int*,int *);
void main(){
	int dataArray[4];
	int size=4;
	int count=0;
	int front,rear=0;
	int deletedValue,data=0,i,num,option;
	while(1){
	printf("Select operation:\n1.Enqueue\n2.Dequeue\n");
	scanf("%d",&option);
	switch(option){
		case 1:printf("Enter number of values want to insert\n");
		       scanf("%d",&num);
		       for(i=0;i<num;i++)
			   {
		       	printf("Enter value to insert\n");
				scanf("%d",&data);
			    int enqueueStatus=enqueue(dataArray,size,data,&count,&rear);
			    if(enqueueStatus==0){
			    	printf("Queue is full\n");
				}
				else{
					printf("Value inserted successfully\n");
				}
			   }
			break;
		case 2:printf("Enter number of values want to delete\n");
		       scanf("%d",&num);
		       for(i=0;i<num;i++)
			   {
		       	int dequeueStatus=dequeue(dataArray,size,&count,&rear,&deletedValue);
			    if(dequeueStatus==-1){
			    	printf("Queue is Empty\n");
				}
				else
				{
					printf("Value=%d deleted successfully\n",deletedValue);
				}
			   }
			break;
		default :return 0;
	}
}
}

//	int dequeueStatus=enqueue(dataArray,size,&count,&rear,&deletedValue);
//    if(dequeueStatus==0){
//    	printf("Queue is Empty\n");
//	}
//	else{
//		printf("Value=%d deleted successfully\n",deletedValue);
//	}
	

int enqueue(int dataArray[4],int size,int data,int *count,int *rear){
	if(*count==size){
		return 0;
		exit(1);
	}
	else
	{
		*rear=(*rear+1)%size;
		dataArray[*rear]=data;
		(*count)++;
		return 1;
    }
}
int dequeue(int dataArray[4],int size,int *count,int *front,int *deletedValue){
	if(*count==0){
		return -1;
	}
	else
	{
		*deletedValue=dataArray[*front];
		 *front=(*front+1)	%size;
		 (*count)--;
		 return 1;
	}
}
