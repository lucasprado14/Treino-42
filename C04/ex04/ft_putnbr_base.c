#include <unistd.h>

// Função auxiliar para validar a base e retornar seu tamanho
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		// Testa caracteres inválidos (+, -, ou whitespaces)
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		// Testa caracteres repetidos
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	// Se a base tiver menos de 2 caracteres, é inválida
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	// 1. Valida a base e obtém seu tamanho
	base_len = ft_check_base(base);
	if (base_len == 0)
		return ;
	// 2. Converte para long para evitar overflow com INT_MIN
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	// 3. Aplica a divisão recursiva
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
	}
	// 4. Imprime o caractere equivalente ao resto
	write(1, &base[n % base_len], 1);
}