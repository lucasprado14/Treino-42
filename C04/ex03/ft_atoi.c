int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	// 1. Pulando espaços em branco (whitespaces)
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	// 2. Processando sinais de '+' e '-'
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sinal = sinal * -1;
		}
		i++;
	}
	// 3. Convertendo caracteres numéricos em inteiros
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (resultado * 10) + (str[i] - '0');
		i++;
	}
	// 4. Retornando o resultado acumulado com seu respectivo sinal
	return (resultado * sinal);
}