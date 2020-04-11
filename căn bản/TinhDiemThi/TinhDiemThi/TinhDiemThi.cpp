#include<stdio.h>
#include<conio.h>

int main() {
	float a, b, c, DiemTrungBinh;
	int hsa, hsb, hsc;
	printf("****CHUONG TRINH TINH DIEM TRUNG BINH CUA HOC SINH****\n");
	printf("Nhap vao diem mon Toan:\n");
	scanf_s("%f", &a);
	printf("Nhap vao diem mon Ly:\n");
	scanf_s("%f", &b);
	printf("Nhap vao diem mon Hoa:\n");
	scanf_s("%f", &c);
	printf("Nhap vao he so mon Toan:\n");
	scanf_s("%d", &hsa);
	printf("Nhap vao he so mon Toan:\n");
	scanf_s("%d", &hsb);
	printf("Nhap vao he so mon Toan:\n");
	scanf_s("%d", &hsc);
	DiemTrungBinh = (a*hsa + b*hsb + c*hsc) / (hsa+hsb+hsc);
	printf("Diem Trung Binh la:%.1f", DiemTrungBinh);
	_getch();
}