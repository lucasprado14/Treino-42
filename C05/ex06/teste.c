#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("0 é primo? %d (Esperado: 0)\n", ft_is_prime(0));
	printf("1 é primo? %d (Esperado: 0)\n", ft_is_prime(1));
	printf("2 é primo? %d (Esperado: 1)\n", ft_is_prime(2));
	printf("3 é primo? %d (Esperado: 1)\n", ft_is_prime(3));
	printf("4 é primo? %d (Esperado: 0)\n", ft_is_prime(4));
	printf("13 é primo? %d (Esperado: 1)\n", ft_is_prime(13));
	printf("2147483647 é primo? %d (Esperado: 1)\n", ft_is_prime(2147483647));

	return (0);
}