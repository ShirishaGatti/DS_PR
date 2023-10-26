#include<stdio.h>
int deleteEnd(int dataArray[10],int last_pos);
void main(){
    int dataArray[10]={1,2,3,4,5,6};
    int length=sizeof(dataArray)/sizeof(int);
    int i,last_pos=5;
     printf("Array :");
    for(int i=0;i<=last_pos;i++){
         	printf("%d ",dataArray[i]);
    }
    printf("\n");
    int status=deleteEnd(dataArray,last_pos);
    if(status==-1)
     printf("\nError");
    else
     printf("\nSuccess");
}
int deleteEnd(int dataArray[],int last_pos){
	if(last_pos==-1){
		return -1;
	}
	last_pos--;
	for(int i=0;i<=last_pos;i++){
    	printf("%d ",dataArray[i]);
	}
	return 1;
	
}