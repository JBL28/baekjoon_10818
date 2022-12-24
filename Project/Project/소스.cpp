#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int min=1000000;
	int max = -1000000;
	int temp;
	int size;
	
	scanf("%d", &size);
	for (int i = 1; i <= size; i++) {
		scanf("%d", &temp);
		if (temp < min)
			min = temp;
		if (temp > max)
			max = temp;
	}
	printf("%d %d", min, max);

	return 0;
}