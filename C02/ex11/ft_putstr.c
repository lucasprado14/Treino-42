#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Função auxiliar para converter e imprimir o caractere no formato \XX
void	print_hex(unsigned char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar('\\');              // Imprime a barra invertida
	ft_putchar(hex_base[c / 16]);  // Imprime o primeiro dígito
	ft_putchar(hex_base[c % 16]);  // Imprime o segundo dígito
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// Se o caractere for imprimível (espaço até o til)
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			// Usamos (unsigned char) para garantir que valores estendidos (com acento) 
			// não fiquem negativos na matemática da divisão
			print_hex((unsigned char)str[i]);
		}
		i++;
	}
}