char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nova_palavra;

	i = 0;
	// No começo do texto, a primeira letra que aparecer SERÁ uma nova palavra
	nova_palavra = 1;
	while (str[i] != '\0')
	{
		// Se for uma letra...
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (nova_palavra == 1)
			{
				// Transforma em MAIÚSCULA se for minúscula
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				nova_palavra = 0; // Já entramos na palavra, as próximas não são o começo
			}
			else
			{
				// Transforma em minúscula se já estivermos no meio da palavra
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		// Se for um número, conta como parte da palavra, mas não mudamos caixa
		else if (str[i] >= '0' && str[i] <= '9')
		{
			nova_palavra = 0; // O número "consome" o início da palavra
		}
		// Se for qualquer outra coisa (espaço, +, -, ?, etc.), a PRÓXIMA letra será uma nova palavra
		else
		{
			nova_palavra = 1;
		}
		i++;
	}
	return (str);
}