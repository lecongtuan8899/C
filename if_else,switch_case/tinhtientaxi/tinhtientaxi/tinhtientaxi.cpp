#include <stdio.h>
#include <conio.h>
void main()
{
	float a, b;
	printf("****TINH TIEN DI TAXI TU SO KM NHAP VAO****\n");
	printf("Nhap vao so km da di: ");
	scanf_s("%f", &a);
	if (a == 1)
	{
		b = 15000;
		printf("So tien phai tra la: %.1f", b);
	}
	else if (a>=2&&a<=5)
	{
	    b = 15000 + ((a - 1) * 13500);
		printf("So tien phai tra la: %.1f", b);
	}
    else if (a>=6)
	{
		b = 15000 + 4 * 13500 + ((a - 5) * 11000);
		printf("So tien phai tra la: %.1f", b);
	}
    else if (a>120)
	{
		b = (15000 + 4 * 13500 + ((a - 5) * 11000)) * 90/ 100;
		printf("So tien phai tra la: %.1f ", b);
	}
	_getch();
}