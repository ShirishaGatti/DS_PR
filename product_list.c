#include<stdio.h>
#include<stdlib.h>
struct product{
	int product_id;
	//char product_name[20];
	int product_price;
	float gst;
};
void main(){
	FILE *fp;
	struct product p;
//	fp=fopen("product.txt","w");
//	if(fp==NULL){
//		printf("Cann't open the file");
//		exit(0);
//	}
//	
//	printf("Enter product details :\n1.id\n2.name\n3.price\n4.gst\n");
//	scanf("%d",&p.product_id);
//	scanf("%s%d%f",&p.product_name,&p.product_price,&p.gst);
//	fwrite(&p,sizeof(p),1,fp);
//	fclose(fp);
	fp=fopen("product.txt","r");
	if(fp==NULL){
		printf("Cann't open the file");
		exit(0);
	}
	struct product p1;
	//fread(&p1,sizeof(p1),1,fp);
	fscanf(fp,"%d",&p1.product_id);
//	fscanf(fp,"%s",p1.product_name);
	fscanf(fp,"%d",p1.product_price);
//	fscanf(fp,"%d",p1.gst);

	printf("product details :\n1.id=%d\n\n3.price=%d\n4.gst=%f\n",p1.product_id,p1.product_price,p1.gst);
	fclose(fp);
}
