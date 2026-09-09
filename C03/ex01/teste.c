#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *s1 = "Hello World";
	char *s2 = "Hello 42";

	printf("--- TESTE 1: Comparando os primeiros 5 caracteres ('Hello') ---\n");
	printf("ft_strncmp: %d | strncmp real: %d (Esperado: 0)\n\n", 
		ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));

	printf("--- TESTE 2: Comparando 7 caracteres (onde há diferença) ---\n");
	printf("ft_strncmp: %d | strncmp real: %d\n\n", 
		ft_strncmp(s1, s2, 7), strncmp(s1, s2, 7));

	printf("--- TESTE 3: Caso limite n = 0 ---\n");
	printf("ft_strncmp: %d | strncmp real: %d (Esperado: 0)\n", 
		ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));

	return (0);
}