#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	int n1, n2, n3, n4, SoNut;
	printf("Nhap bien so xe(4 so) : ");
	scanf_s("%d", &n);
	n4 = n % 10; n /= 10;
	n3 = n % 10; n /= 10;
	n2 = n % 10; n /= 10;
	n1 = n;
	SoNut = (n1 + n2 + n3 + n4) % 10;
	printf("So nut la : %d", SoNut);
	_getch();
}
