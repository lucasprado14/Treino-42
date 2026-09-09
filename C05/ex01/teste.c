#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("Fatorial de 5: %d (Esperado: 120)\n", ft_recursive_factorial(5));
	printf("Fatorial de 0: %d (Esperado: 1)\n", ft_recursive_factorial(0));
	printf("Fatorial de 1: %d (Esperado: 1)\n", ft_recursive_factorial(1));
	printf("Fatorial de -5: %d (Esperado: 0)\n", ft_recursive_factorial(-5));
	printf("Fatorial de 10: %d (Esperado: 3628800)\n", ft_recursive_factorial(10));

	return (0);
}