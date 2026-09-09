#include <stdio.h>
#include <string.h> // Para comparar com a strlcpy original se necessário

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			origem[] = "Piscine 42";
	char			destino1[20];
	char			destino2[5];
	unsigned int	retorno;

	printf("--- TESTE 1: Espaço de sobra (tamanho 20) ---\n");
	retorno = ft_strlcpy(destino1, origem, 20);
	printf("Destino final: '%s'\n", destino1);
	printf("Retorno obtido: %u (Esperado: 10)\n\n", retorno);

	printf("--- TESTE 2: Espaço limitado (tamanho 5) ---\n");
	// Com tamanho 5, ele deve copiar apenas 4 caracteres e colocar o '\0' na 5ª posição.
	retorno = ft_strlcpy(destino2, origem, 5);
	printf("Destino final (cortado): '%s'\n", destino2);
	printf("Retorno obtido: %u (Esperado: 10)\n", retorno);

	return (0);
}