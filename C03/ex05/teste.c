#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest1[20] = "Hello ";
	char dest2[20] = "Hello ";
	char src[] = "World!";
	unsigned int ret;

	printf("--- TESTE 1: Espaço suficiente (size = 20) ---\n");
	ret = ft_strlcat(dest1, src, 20);
	printf("Resultado: '%s'\n", dest1);
	printf("Retorno: %u (Esperado: 12 -> 'Hello ' (6) + 'World!' (6))\n\n", ret);

	printf("--- TESTE 2: Tamanho limitado (size = 9) ---\n");
	// Com size 9, 'Hello ' usa 6 bytes. Sobram 2 para copiar ('Wo') + 1 para o '\0'
	ret = ft_strlcat(dest2, src, 9);
	printf("Resultado: '%s'\n", dest2);
	printf("Retorno: %u (Esperado: 12)\n", ret);

	return (0);
}