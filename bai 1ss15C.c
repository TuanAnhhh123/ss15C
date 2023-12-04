#include<stdio.h>

int main(){
	struct Student{
		char ho_va_ten[20];
		int tuoi;
		int so_dien_thoai;
		char email[50];
	};
	struct Student st1={
		"Nguyen Van A",18,54855881,"A@gmail.com"
	};

	printf("ho va ten :%s\n",st1.ho_va_ten);
	printf("tuoi :%d\n",st1.tuoi);
	printf("so dien thoai :%d\n",st1.so_dien_thoai);
	printf("email :%s\n",st1.email);
}
