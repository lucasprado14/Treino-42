#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Raiz de 4: %d (Esperado: 2)\n", ft_sqrt(4));
	printf("Raiz de 9: %d (Esperado: 3)\n", ft_sqrt(9));
	printf("Raiz de 16: %d (Esperado: 4)\n", ft_sqrt(16));
	printf("Raiz de 25: %d (Esperado: 5)\n", ft_sqrt(25));
	printf("Raiz de 5: %d (Esperado: 0 - Irracional)\n", ft_sqrt(5));
	printf("Raiz de 0: %d (Esperado: 0)\n", ft_sqrt(0));
	printf("Raiz de -9: %d (Esperado: 0)\n", ft_sqrt(-9));
	printf("Raiz de 2147395600: %d (Esperado: 46340)\n", ft_sqrt(2147395600));

	return (0);
}