#include<stdio.h>
void main()
}
void selection_sort(int data[],int last_pos){
int dataArray[10]={54,67,8,7,43,78,23,11}
int i=0,min,cur_pos;
while(i<last_pos)
{
min=i;
cur_pos=i+1;
while(cur_pos<=last_pos)
{
if(data[cur_pos]<data[min])
{
min=cur_pos;
cur_pos++;
}
else
{
cur_pos=cur_pos+1;
}
temp=min;
min=i;
i=temp;
}
i=i+1;
}
for(int j=0;j<=8;j++)
{
printf("%d",data[j]);
}
}
