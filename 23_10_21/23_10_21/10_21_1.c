#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ц╟ещеепР
void bubble_sort(int arr[], int sz)
{
	int n = 0;
	int i = 0;
	int min = 0;
	for ( n = 0; n < sz-1; n++)
	{
		for ( i = 0; i < sz-1-n; i++)
		{
			if (arr[i]<arr[i+1])
			{
				min = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = min;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, sz);
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}