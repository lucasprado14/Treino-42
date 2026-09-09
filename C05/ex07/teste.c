#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Próximo de -10: %d (Esperado: 2)\n", ft_find_next_prime(-10));
	printf("Próximo de 2: %d (Esperado: 2)\n", ft_find_next_prime(2));
	printf("Próximo de 3: %d (Esperado: 3)\n", ft_find_next_prime(3));
	printf("Próximo de 4: %d (Esperado: 5)\n", ft_find_next_prime(4));
	printf("Próximo de 14: %d (Esperado: 17)\n", ft_find_next_prime(14));
	printf("Próximo de 100: %d (Esperado: 101)\n", ft_find_next_prime(100));

	return (0);
}