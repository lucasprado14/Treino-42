char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// Loop 1: Copia enquanto não chegar ao fim da origem E não estourar o limite 'n'
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	// Loop 2: Se a origem acabou antes de atingir 'n', preenche o resto com '\0'
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	// Retorna o ponteiro do destino, exatamente como manda o manual
	return (dest);
}

#include <stdio.h>


int	main(void)
{
	char	origem[] = "Piscine 42";
	char	destino1[20] = "--------------------";
	char	destino2[20] = "--------------------";

	// Teste 1: Limite 'n' menor que a string (Deve cortar e NÃO por '\0' no fim)
	ft_strncpy(destino1, origem, 4);
	printf("Teste 1 (n = 4): %c%c%c%c\n", destino1[0], destino1[1], destino1[2], destino1[3]);

	// Teste 2: Limite 'n' maior que a string (Deve preencher o resto com '\0')
	ft_strncpy(destino2, "Oi", 5);
	// Se funcionou, as posições 2, 3 e 4 do destino2 viraram '\0'
	if (destino2[2] == '\0' && destino2[3] == '\0' && destino2[4] == '\0')
		printf("Teste 2 (n = 5): Preencheu com zeros perfeitamente!\n");
	else
		printf("Teste 2: Erro, não completou com zeros.\n");

	return (0);
}