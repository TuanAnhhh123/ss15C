#include<stdio.h>
struct Student{
	char hovaten[100];
	int tuoi;
	int sodienthoai;
	char email[100];
};
int main(){
	struct Student sinhvien[1];
	for(int i =0;i<1;i++){
		printf("nhap ho va ten ");
		scanf("%s",&sinhvien[i].hovaten);
		printf("nhap tuoi ");
		scanf("%d",&sinhvien[i].tuoi);
		printf("nhap so dien thoai ");
		scanf("%d",&sinhvien[i].sodienthoai);
		printf("nhap email ");
		scanf("%s",&sinhvien[i].email);
	}
	printf("\nDanh Sach Sinh Vien\n");
	for(int i=0;i<1;i++){
		printf("ho va ten :%s,tuoi :%d,so dien thoai:%d,email:%s",sinhvien[i].hovaten,&sinhvien[i].tuoi,&sinhvien[i].sodienthoai,sinhvien[i].email);
		
	}
	
}
