#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	char *s3 = "HellA";
	char *s4 = "Hello World";

	printf("--- TESTE 1: Strings iguais ---\n");
	printf("ft_strcmp: %d | strcmp real: %d\n\n", ft_strcmp(s1, s2), strcmp(s1, s2));

	printf("--- TESTE 2: Primeira maior que a segunda ---\n");
	printf("ft_strcmp: %d | strcmp real: %d\n\n", ft_strcmp(s1, s3), strcmp(s1, s3));

	printf("--- TESTE 3: Primeira menor/mais curta ---\n");
	printf("ft_strcmp: %d | strcmp real: %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));

	return (0);
}