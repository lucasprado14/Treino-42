#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	str[] = "---Ola,tudo--bem?--42--SP---";
	char	charset[] = "-,?";
	char	**tab;
	int		i;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i] != NULL)
	{
		printf("[%d]: %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}