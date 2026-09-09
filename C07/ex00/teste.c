#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*orig = "Hello, 42!";
	char	*dup_orig = strdup(orig);
	char	*dup_ft = ft_strdup(orig);

	printf("Original:   %s\n", orig);
	printf("strdup:     %s (Ponteiro: %p)\n", dup_orig, dup_orig);
	printf("ft_strdup:  %s (Ponteiro: %p)\n", dup_ft, dup_ft);

	// Lembre-se sempre de liberar a memória alocada por malloc
	free(dup_orig);
	free(dup_ft);
	return (0);
}