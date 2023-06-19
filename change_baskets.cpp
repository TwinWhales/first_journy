#include <stdio.h>
#pragma warning(disable:4996)

#define size 100
void reverse(int *a, int *b, int num[size]);

int main()
{
	int i, repeat, numbers, a, b;

	scanf("%d %d", &numbers, &repeat);

	int num[size];

	for (i = 0; i < numbers; i++)
	{
		num[i] = i + 1;
	}

	for (i = 0; i < repeat; i++)
	{
		scanf("%d %d", &a, &b);
		reverse(&a, &b, num);
	}
	
	for (i = 0; i < numbers; i++)
	{
		printf("%d", num[i]);
	}
}

void reverse(int* a, int* b, int num[size])
{
	int i, def, repeats;
	repeats = (*a + *b) / 2;
	for (i = 0; i < repeats; i++)
	{
		def = num[*a + i - 1];
		num[*a + i - 1] = num[*b - i - 1];
		num[*b - i - 1] = num[*a +i - 1];
	}
}