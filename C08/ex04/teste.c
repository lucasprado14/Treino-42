#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(argc, argv);
	if (tab == NULL)
		return (1);
	i = 0;
	while (tab[i].str != 0)
	{
		printf("Index [%d]:\n", i);
		printf("  size: %d\n", tab[i].size);
		printf("  str : %s\n", tab[i].str);
		printf("  copy: %s\n", tab[i].copy);
		free(tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}