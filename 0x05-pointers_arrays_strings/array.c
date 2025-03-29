#include <stdio.h>
void print_array(int *a, int n);

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}

void print_array(int *a, int n)
{
	int count = 0;

	while (a[count] != '\0')
	{
		count++;
	}
	if (count <= n)
	{
		int j = 0;

		while (j < n)
		{
			if (j != n - 1){
				printf ("%d, ", a[j]);
				j++;
				}
			else {
				printf("%d\n", a[j]);
				j++;
			}
		}
	}
}	
