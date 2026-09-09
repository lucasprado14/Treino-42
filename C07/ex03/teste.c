#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*palavras[] = {"Hello", "world", "42", "cursus"};
	char	*sep = " -> ";
	char	*resultado;

	resultado = ft_strjoin(4, palavras, sep);
	printf("Resultado 1: '%s'\n", resultado);
	free(resultado);

	// Teste com separador vazio
	resultado = ft_strjoin(4, palavras, "");
	printf("Resultado 2: '%s'\n", resultado);
	free(resultado);

	// Teste com size 0
	resultado = ft_strjoin(0, palavras, sep);
	printf("Resultado 3 (size 0): '%s'\n", resultado);
	free(resultado);

	return (0);
}