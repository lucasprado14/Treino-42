// Função auxiliar para validar a base e retornar o tamanho
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

// Função auxiliar para achar o valor do caractere na base
int	ft_get_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1); // Retorna -1 se o caractere não pertence à base
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sinal;
	int	resultado;
	int	base_len;
	int	val;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return (0);
	i = 0;
	sinal = 1;
	resultado = 0;
	// 1. Pulando espaços
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	// 2. Processando sinais
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	// 3. Conversão usando a base
	val = ft_get_val(str[i], base);
	while (val != -1)
	{
		resultado = (resultado * base_len) + val;
		i++;
		val = ft_get_val(str[i], base);
	}
	return (resultado * sinal);
}