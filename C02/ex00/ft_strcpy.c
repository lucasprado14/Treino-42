char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	// O loop roda enquanto a string de origem não chegar ao fim
	while (src[i] != '\0')
	{
		dest[i] = src[i]; // Copia o caractere da origem para o destino
		i++;
	}
	// MUITO IMPORTANTE: O loop acima para ANTES de copiar o '\0'.
	// Precisamos colocar o '\0' manualmente no final do destino!
	dest[i] = '\0';

	// Como a função promete retornar um char *, devolvemos o dest
	return (dest);
}


#include <stdio.h>


int	main(void)
{
	char	origem[] = "Piscine 42";
	char	destino[50]; // Espaço de sobra para receber a cópia
	char	*retorno;

	// Chamamos a função
	retorno = ft_strcpy(destino, origem);

	// Testamos se o texto realmente foi copiado para o destino
	printf("String de Origem: %s\n", origem);
	printf("String de Destino: %s\n", destino);
	
	// Testamos se o retorno aponta para o lugar certo
	printf("Endereço do retorno: %p\n", (void*)retorno);
	printf("Endereço do destino: %p\n", (void*)destino);

	return (0);
}