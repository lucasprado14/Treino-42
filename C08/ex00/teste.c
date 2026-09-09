#include "ft.h"

// Implementação mínima só para o teste linkar
void	ft_putchar(char c) { write(1, &c, 1); }
void	ft_putstr(char *str) { (void)str; }
void	ft_swap(int *a, int *b) { (void)a; (void)b; }
int		ft_strlen(char *str) { (void)str; return (0); }
int		ft_strcmp(char *s1, char *s2) { (void)s1; (void)s2; return (0); }

int	main(void)
{
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
	return (0);
}