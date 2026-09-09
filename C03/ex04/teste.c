#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "Hello 42 Network World!";
	char *res;

	printf("--- TESTE 1: Encontrando palavra no meio ---\n");
	res = ft_strstr(str, "42");
	printf("ft_strstr: '%s'\n", res);
	printf("strstr real: '%s'\n\n", strstr(str, "42"));

	printf("--- TESTE 2: Palavra inexistente ---\n");
	res = ft_strstr(str, "Piscine");
	printf("ft_strstr: %s (Esperado: (null))\n\n", res ? res : "(null)");

	printf("--- TESTE 3: Buscar string vazia ---\n");
	res = ft_strstr(str, "");
	printf("ft_strstr: '%s'\n", res);

	return (0);
}