#include <stdio.h>
#include <conio.h>
int main()
{
	int NamSinh, Tuoi;
	printf("****CHUONG TRINH TINH TUOI****\n");
	printf("Nhap nam sinh:\n");
	scanf_s("%d", &NamSinh);
	Tuoi = 2020 - NamSinh;
	printf("Tuoi cua ban la:%d", Tuoi);
	_getch();
}