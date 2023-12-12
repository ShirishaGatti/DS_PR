#include<stdio.h>
#include<stdlib.h>
struct product{
	int product_id;
	char product_name[20];
	int product_price;
	float gst;
};
void main(){
	FILE *fp;fp=fopen("product.txt","rb");
	if(fp==NULL){
		printf("Cann't open the file");
		exit(0);
	}
	struct product p1;
	
	fread(&p1,sizeof(p1),1,fp);
	printf("product details :\n1.id=%d\n2.name=%s\n3.price=%d\n4.gst=%f\n",p1.product_id,p1.product_name,p1.product_price,p1.gst);
	fclose(fp);
}
