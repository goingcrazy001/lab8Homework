#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, sum;
	sum = 1;
	printf("Введите положительное число n:");
	scanf("%d", &n);
	for (int i = 1;i <= (2 * n - 1);i += 2) {
		sum *= i;
	}
	printf("Произведение нечетных чисел до 2*n-1 при n=%d равно:%d", n, sum);
}