char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	// 1. Encontra o final da string de destino
	while (dest[i] != '\0')
	{
		i++;
	}
	// 2. Copia de src para dest respeitando o limite nb
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// 3. Garante SEMPRE o fechamento da string com '\0'
	dest[i] = '\0';
	// 4. Retorna a string alterada
	return (dest);
}