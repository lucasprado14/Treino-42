#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int	total;

	total = ft_ten_queens_puzzle();
	printf("Total de soluções encontradas: %d (Esperado: 724)\n", total);
	return (0);
}