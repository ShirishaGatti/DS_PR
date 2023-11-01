#include<stdio.h>
int mergeSort(int [],int,int);
int merge(int [],int ,int ,int );
void main(){
 int dataArray[10]={5,90,47,38,83,0,9};
 int last_pos=6,i=0;
 int size=sizeof(dataArray)/sizeof(int);
 printf("Array :");
 for(i=0;i<=last_pos;i++){
  printf("%d ",dataArray[i]);
 }
 int low=0,high=6;
// int mid=(low+high)/2;
 mergeSort(dataArray,low,high);
// merge(dataArray,low,mid,high);
}
int mergeSort(int dataArray[],int low,int high){
 int mid;
 if(low<=high){//0<=6
  mid=(low+high)/2;//mid=3
 }
 mergeSort(dataArray,low,mid);
 mergeSort(dataArray,mid+1,high);
 merge(dataArray,low,mid,high);
}

int merge(int dataArray[],int low,int mid,int high){
 int temp[10];
 int i=low,k=low,j=mid+1;
 while(i<=mid && j<=high){
  if(dataArray[i]=dataArray[j]){
   temp[k]=dataArray[i];
   i++;
   k++;
  }
  else{
   temp[k]=dataArray[j];
   j++;
   k++;
  }
 }
 
 if(i>mid){
  while(j<=high){
   temp[k]=dataArray[j];
   j++;
   k++;
  }
 }
 else{
  if(i<=mid){
   while(i<=mid){
    temp[k]=dataArray[i];
    i++;
    k++;
   }
  }
 }

 for(k=low;k<=high;k++){
  printf("%d ",dataArray[k]);
 }
}
