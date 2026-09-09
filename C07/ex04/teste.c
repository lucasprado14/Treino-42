#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *res;

	// Decimal para Hexadecimal
	res = ft_convert_base("   ---+--42", "0123456789", "0123456789ABCDEF");
	printf("Resultado 1: %s (Esperado: -2A)\n", res);
	free(res);

	// Binário para Decimal
	res = ft_convert_base("101010", "01", "0123456789");
	printf("Resultado 2: %s (Esperado: 42)\n", res);
	free(res);

	// Base inválida
	res = ft_convert_base("42", "0123456789+", "01");
	printf("Resultado 3: %s (Esperado: (null))\n", res);
	free(res);

	return (0);
}