#include <stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, d, min;
	printf("****TIM SO NGUYEN NHO NHAT****\n");
	printf("Nhap vao 4 so a,b,c,d: ");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	printf("So nho nhat la: %d", min);
	_getch();
}