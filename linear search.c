#include<stdio.h>
int linear_search(int dataArray[10],int last_pos,int value);
void main()
{
int dataArray[10]={4,8,16,32,45,56,67};
int length=sizeof(dataArray)/sizeof(int);
int last_pos=9;
int value;
printf("enter value to search");
scanf("%d",&value);
int index=linear_search(dataArray,last_pos,value);
if index==-1;
printf("value found at position");

