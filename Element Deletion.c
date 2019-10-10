#include <stdio.h>

// Deletion - Delete an element in the existing array.
int main() {
	int arr[5];
	int delElement = 0;
	int posDel = 0;
	// Initialising the array with zeros.
	for (size_t i = 0; i < 5; i++)
		arr[i] = 0;

	for (size_t i = 0; i < 5; i++)
	{
		printf("ENTER ELEMENT AT INDEX %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("ENTER THE ELEMENT TO DELETE:  ");
	scanf("%d", &delElement);
	int flag = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr[i] == delElement)
		{
			flag = 1;
			posDel = i;
			break;
		}
	}
	if (flag == 1)
	{
		arr[posDel] = 98956458;

		printf("[ ");
		for (size_t i = 0; i < 5; i++)
		{
			if (arr[i] != 98956458)
			{
				printf("%d  ", arr[i]);
			}
		}
		printf("]");
	}
	else
	{
		printf("ELEMENT DOES NOT EXIST!");
	}
	printf("\n\n\n");
	return 0;
}