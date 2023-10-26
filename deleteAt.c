int deleteBegin(int dataArray[10],int last_pos,int length,int index);
void main(){
    int dataArray[10]={1,2,3,4,5,6,6,6,6};
    int i,last_pos=8;
    printf("Array :");
    for(int i=0;i<=last_pos;i++){
         	printf("%d ",dataArray[i]);
    }
    int length=sizeof(dataArray)/sizeof(int);
    
    int index;
    printf("Enter index of element which is to be deleted \n");
    scanf("%d",&index);
    int status=deleteBegin(dataArray,last_pos,length,index);
    if(status==-1)
     printf("List is empty");
    else if(status==0)
     printf("Invalid index");
    else
     printf("Success");
}
int deleteBegin(int dataArray[],int last_pos,int length,int index){
	int cur_pos;
	if(last_pos==-1){
		return -1;
	}
	if(index==last_pos)
	{
		last_pos--;
			for(int i=0;i<=last_pos;i++){
         	printf("%d ",dataArray[i]);
        	}
    	return 1;
	}
	else 
	{
	 if(index>=0 && index<=last_pos){
	 	cur_pos=index;
	 	while(cur_pos<last_pos){
	 		dataArray[cur_pos]=dataArray[cur_pos+1];
	 		cur_pos++;
		 }
		 last_pos--;
         for(int i=0;i<=last_pos;i++){
         	printf("%d ",dataArray[i]);
        	}
	  return 1;
	  }
	 return 0;
	}
}
