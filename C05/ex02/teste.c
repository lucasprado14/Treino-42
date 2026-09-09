#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("2^3: %d (Esperado: 8)\n", ft_iterative_power(2, 3));
	printf("5^0: %d (Esperado: 1)\n", ft_iterative_power(5, 0));
	printf("0^0: %d (Esperado: 1)\n", ft_iterative_power(0, 0));
	printf("3^(-2): %d (Esperado: 0)\n", ft_iterative_power(3, -2));
	printf("(-2)^3: %d (Esperado: -8)\n", ft_iterative_power(-2, 3));
	printf("(-2)^4: %d (Esperado: 16)\n", ft_iterative_power(-2, 4));

	return (0);
}