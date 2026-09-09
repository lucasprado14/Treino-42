#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("--- TESTES FT_ATOI_BASE ---\n");

	// Hexadecimal "2A" em base 10 é 42
	printf("1. Hexa ' 2A': %d (Esperado: 42)\n", ft_atoi_base("  2A", "0123456789ABCDEF"));

	// Binário "101010" em base 10 é 42
	printf("2. Binário '101010': %d (Esperado: 42)\n", ft_atoi_base("101010", "01"));

	// Sinais negativos em Hexa
	printf("3. Hexa Negativo '---1A': %d (Esperado: -26)\n", ft_atoi_base("---1A", "0123456789ABCDEF"));

	// Base poneyvif
	printf("4. Octal 'poneyvif': %d\n", ft_atoi_base("  --vn", "poneyvif"));

	// Base inválida (caractere repetido)
	printf("5. Base inválida: %d (Esperado: 0)\n", ft_atoi_base("10", "012344"));

	return (0);
}