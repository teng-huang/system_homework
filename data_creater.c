#include <stdio.h>
#include <stdlib.h>

#define SIZE_1MB (1024 * 1024)
#define MAX_SZ (1 * SIZE_1MB)

typedef unsigned int u32;

int main()
{
	int count = 0;
	int size = 0;

	while (size < MAX_SZ)
	{
		u32 y = rand() % 19;
		u32 m = rand() % 12;
		u32 h = rand() % 24;
		u32 mm = rand() % 60;
		u32 s = rand() % 60;

		u32 d;

		if (m == 4 || m == 6 || m == 9 || m == 11)
			d = rand() % 31;
		else if (m != 2)
			d = rand() % 30;
		else if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
			d = rand() % 29;
		else
			d = rand() % 28;

		switch (rand() % 3)
		{
		case 0:
			size += printf("20%02u%02u%02d-%02u:%02u:%02u, Alex, %s Door,\n", y, m + 1, d + 1, h, mm, s, s % 2 == 0 ? "In" : "Out");
			break;
		case 1:
			size += printf("20%02u%02u%02d-%02u:%02u:%02u, Janet %s Door,\n", y, m + 1, d + 1, h, mm, s, s % 2 == 0 ? "In" : "Out");
			break;
		default:
			size += printf("20%02u%02u%02d-%02u:%02u:%02u, Mark %s Door,\n", y, m + 1, d + 1, h, mm, s, s % 2 == 0 ? "In" : "Out");
			break;
		}
	}
  return 0;
}
