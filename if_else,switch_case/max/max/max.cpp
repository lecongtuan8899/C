#include <stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, d, max;
	printf("****TIM SO NGUYEN LON NHAT****\n");
	printf("Nhap vao 4 so a,b,c,d: ");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	printf("So lon nhat la: %d", max);
	_getch();
}