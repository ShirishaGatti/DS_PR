#include<stdio.h>
int deleteBegin(int dataArray[10],int last_pos,int length);
void main(){
    int dataArray[10]={1,2,3,4,5,6,6,6,6};
    int length=sizeof(dataArray)/sizeof(int);
    printf("%d ",length);
    int i,last_pos=8;
    int status=deleteBegin(dataArray,last_pos,length);
    if(status==-1)
     printf("Error");
    else if(status==0)
     printf("Fail");
    else
     printf("Success");
    for(i=0;i<=last_pos;i++){
    	printf("%d ",dataArray[i]);
	}
}
int deleteBegin(int dataArray[],int last_pos,int length){
	int cur_pos;
	if(last_pos==-1){
		return -1;
	}
	if(last_pos==0){
		last_pos--;
		return 1;
	}
	else{
		cur_pos=0;
		while(cur_pos<=last_pos){
			dataArray[cur_pos]=dataArray[cur_pos+1];
			cur_pos++;
		}
		last_pos--;
		return 1;
	}
}