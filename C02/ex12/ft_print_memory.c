#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// 1. Imprime o endereço de memória (como número hex de 16 dígitos)
void	print_addr(unsigned long long addr, int depth)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (depth < 16)
	{
		print_addr(addr / 16, depth + 1);
		ft_putchar(hex[addr % 16]);
	}
}

// 2. Imprime os valores em hexadecimal de até 16 bytes
void	print_hex_content(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;
	char			*hex;

	hex = "0123456789abcdef";
	j = 0;
	while (j < 16)
	{
		if (j % 2 == 0)
			ft_putchar(' ');
		if (i + j < size)
		{
			ft_putchar(hex[ptr[i + j] / 16]);
			ft_putchar(hex[ptr[i + j] % 16]);
		}
		else
		{
			// Preenche com espaços se a última linha não tiver 16 bytes
			ft_putchar(' ');
			ft_putchar(' ');
		}
		j++;
	}
}

// 3. Imprime os caracteres visíveis ou ponto '.'
void	print_str_content(unsigned char *ptr, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && (i + j) < size)
	{
		if (ptr[i + j] >= ' ' && ptr[i + j] <= '~')
			ft_putchar(ptr[i + j]);
		else
			ft_putchar('.');
		j++;
	}
}

// Função Principal Exigida pelo PDF
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		// Passo A: Imprime o Endereço
		print_addr((unsigned long long)(ptr + i), 0);
		ft_putchar(':');
		
		// Passo B: Imprime os Hexadecimais
		print_hex_content(ptr, size, i);
		ft_putchar(' ');
		
		// Passo C: Imprime os Caracteres
		print_str_content(ptr, size, i);
		ft_putchar('\n');
		
		i += 16; // Avança 16 bytes para a próxima linha
	}
	return (addr);
}