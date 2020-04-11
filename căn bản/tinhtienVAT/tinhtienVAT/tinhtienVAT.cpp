#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, Tien;
	float VAT;
	printf("****CHUONG TRINH TINH TIEN SAN PHAM VA THUE VAT****\n");
	printf("Nhap vao so luong:\n");
	scanf_s("%d", &a);
	printf("Nhap vao don gia:\n");
	scanf_s("%d", &b);
	Tien = a * b;
	VAT = Tien * 10 / 100;
	printf("Tien cua san pham la:%d\n", Tien);
	printf("Thue VAT:%.5f", VAT);
	_getch();
}