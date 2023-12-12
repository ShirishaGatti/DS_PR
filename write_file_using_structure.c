#include<stdio.h>
#include<stdlib.h>
struct product{
	int product_id;
	char product_name[20];
	int product_price;
	float gst;
};
void main(){
	FILE *fp;
	struct product p;
	fp=fopen("product.txt","wb");
	if(fp==NULL){
		printf("Cann't open the file");
		exit(0);
	}
	printf("Enter product details :\n1.id\n2.name\n3.price\n4.gst\n");
	scanf("%d",&p.product_id);
	scanf("%s%d%f",&p.product_name,&p.product_price,&p.gst);
	fwrite(&p,sizeof(p),1,fp);
	fclose(fp);
