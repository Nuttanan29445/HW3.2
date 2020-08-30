#include <stdio.h>
int main()
{
	int a[20], b[20], sum = 0, num = 1, n, m, ans[20], i, j, k;
	printf("Set A: \n");
	for (i = 1; i <= 5; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	printf("Set B: \n");
	for (j = 1; j <= 5; j++)
	{
		printf("b[%d] = ", j);
		scanf_s("%d", &b[j]);
	}
	for (n = 1; n < i; n++)
	{
		for (m = 1; m < j; m++)
		{
			if (a[n] == b[m])
			{
				sum++;
				ans[num] = a[n];
				num++;
			}
		}
	}
	printf("\n");
	printf("Intersection of Set A and Set B: ");
	for (k = 1; k <= sum; k++)
	{
		printf(" %d ", ans[k]);
	}
	return 0;
}