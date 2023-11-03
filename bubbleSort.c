#include <stdio.h>
void bubbleSort(int[10],int);
void main()
{
int dataArray[10]={90,98,67,38,2,19};
int last_pos=5;
bubbleSort(dataArray,last_pos);
}
void bubblSort(int dataArray[],int last_pos){
	int cur_pos,temp;
	while(cur_pos<last_pos){
		cur_pos=0;
		while(cur_pos<last_pos){
			if(dataArray[cur_pos]>dataArray[cur_pos+1]){
				temp=dataArray[cur_pos];
				dataArray[cur_pos]=dataArray[cur_pos+1];
				dataArray[cur_pos+1]=temp;
			}
			cur_pos++;
		}
		last_pos--;
	}
	for(int i=0;i<7;i++)
     {
      printf("%d ",dataArray[i]);
     }
}

