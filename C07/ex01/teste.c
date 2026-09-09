#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min = 2;
	int	max = 7;
	int	*arr;
	int	i;

	arr = ft_range(min, max);
	if (arr == NULL)
	{
		printf("Retornou NULL\n");
		return (0);
	}
	printf("Valores no intervalo [%d, %d):\n", min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	// Teste com min >= max
	int *arr_null = ft_range(5, 5);
	if (arr_null == NULL)
		printf("Teste 5 >= 5 passou com sucesso (retornou NULL).\n");

	free(arr);
	return (0);
}