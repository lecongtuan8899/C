#include <stdio.h>
#include <conio.h>

void main()
{
	int a;
	printf("****CHUONG TRINH DEM SO NGUYEN****\n");
	printf("Nhap vao so nguyen a:");
	scanf_s("%d", &a);
	if (a==0)
	{
		printf("Khong");
	}
	else
	{
		if (a == 1)
		{
			printf("Mot");
		}
		else
		{
			if (a == 2)
			{
				printf("Hai");
			}
			else
			{
				if (a == 3)
				{
					printf("Ba");
				}
				else
				{
					if (a == 4)
					{
						printf("Bon");
					}
					else
					{
						if (a == 5)
						{
							printf("Nam");
						}
						else
						{
							if (a == 6)
							{
								printf("Sau");
							}
							else
							{
								if (a == 7)
								{
									printf("Bay");
								}
								else
								{
									if (a == 8)
									{
										printf("Tam");
									}
									else
									{
										if (a == 9)
										{
											printf("Chin");
										}
										else
										{
											printf("Khong doc duoc");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	_getch();
}