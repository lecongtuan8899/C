#include <stdio.h>
#include<conio.h>
void main()
{
	char a;
	printf("****CHUONG TRINH DOI CHU THUONG SANG CHU HOA VA NGUOC LAI****\n");
	printf("Nhap vao chu cai:");
	scanf_s("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
	}
	else if (a >= 'A' && a <= 'Z')
		{
			a = a + 32;
		}		
	printf("Chu cai sau khi doi: %c", a);
	_getch();
}