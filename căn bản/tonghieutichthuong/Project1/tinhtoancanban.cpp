#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b,Tong,Hieu,Tich,Thuong;
	printf("Nhap hai so nguyen : ");
	scanf_s(" %d %d", &a, &b);
	Tong = a + b; Hieu = a - b;
	Tich = a * b; Thuong = a / b;
	printf("Tong cua a va b : %d\n", Tong);
	printf("Hieu cua a va b : %d\n", Hieu);
	printf("Tich cua a va b : %d\n", Tich);
	printf("Thuong cua a va b : %d\n", Thuong);
	_getch();
}
