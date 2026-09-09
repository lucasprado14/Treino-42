#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest1[50] = "Hello ";
	char dest2[50] = "Hello ";
	char src[] = "World 42!";

	printf("--- TESTE 1: Concatenando apenas 3 caracteres ('Wor') ---\n");
	ft_strncat(dest1, src, 3);
	printf("Resultado: '%s' (Esperado: 'Hello Wor')\n\n", dest1);

	printf("--- TESTE 2: nb maior do que a string de origem (nb = 20) ---\n");
	ft_strncat(dest2, src, 20);
	printf("Resultado: '%s' (Esperado: 'Hello World 42!')\n", dest2);

	return (0);
}