#include<stdio.h>
#include<conio.h>
int main()
{
	int R;
	float S, A;
	printf("****TINH CHU VI VA DIEN TICH HINH TRON****\n");
	printf("Nhap vao ban kinh R:");
	scanf_s("%d", &R);
	S = R * R * 3.14;
	A = 2 * R * 3.14;
	printf("Chu vi cua hinh tron:%.1f\n", A);
	printf("Dien tich cua hinh tron:%.1f", S);
	_getch();
}