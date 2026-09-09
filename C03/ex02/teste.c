#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	// Alocamos um array com 50 posições para ter espaço de sobra
	char dest[50] = "Hello ";
	char src[] = "World!";

	printf("--- Antes da concatenação ---\n");
	printf("dest: '%s'\n", dest);
	printf("src:  '%s'\n\n", src);

	ft_strcat(dest, src);

	printf("--- Depois da concatenação ---\n");
	printf("dest final: '%s'\n", dest);

	// Comparação simples
	if (strcmp(dest, "Hello World!") == 0)
		printf("\033[0;32m[SUCESSO] Concatenação perfeita!\033[0m\n");
	else
		printf("\033[0;31m[FALHA] Algo deu errado no resultado final.\033[0m\n");

	return (0);
}