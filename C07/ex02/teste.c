#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	arr = NULL;
	size = ft_ultimate_range(&arr, 3, 8);
	printf("Tamanho retornado: %d (Esperado: 5)\n", size);
	if (arr != NULL)
	{
		printf("Elementos: ");
		i = 0;
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
	}

	// Teste com min >= max
	size = ft_ultimate_range(&arr, 10, 5);
	printf("Tamanho (10 >= 5): %d (Esperado: 0), arr é NULL? %s\n",
		size, arr == NULL ? "SIM" : "NAO");

	return (0);
}