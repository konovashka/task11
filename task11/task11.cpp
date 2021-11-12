// Размен местами минимального и максимального элемента массива

#include <iostream>

int main()
{
    const int n = 5;
    int a[n];
	int b,numbMin,numbMax,max,min;
	max = INT_MIN;
	min = INT_MAX;
	numbMax = numbMin = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
			numbMax = i;
		}
		if (a[i]<min)
		{
			min = a[i];
			numbMin = i;
		}
	}
	b = a[numbMin];
	a[numbMin] = a[numbMax];
	a[numbMax] = b;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}