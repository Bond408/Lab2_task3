#include <stdio.h>
#include <locale.h>
void main()
{
	int L = 331;
	int n = 2;
	setlocale(LC_ALL, "RUS");
	printf("����:\n\t   %d\n\t %d\n\t_________\n�����:\n\t+00%.3f", n, L, (float)n / (float)L);
}