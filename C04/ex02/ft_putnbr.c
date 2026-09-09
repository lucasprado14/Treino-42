#include <unistd.h>

// Função auxiliar estilo ft_putchar para facilitar a escrita
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	// 1. Trata o menor valor possível para evitar Overflow
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	// 2. Trata números negativos comuns
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	// 3. Usa RECURSÃO para números com 2 ou mais dígitos (ex: 42)
	if (nb >= 10)
	{
		ft_putnbr(nb / 10); // Passa o 4
		ft_putnbr(nb % 10); // Passa o 2
	}
	// 4. Imprime o dígito convertido para ASCII
	else
	{
		ft_putchar(nb + '0');
	}
}