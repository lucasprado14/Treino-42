char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	// 1. Encontra o final da string de destino (onde está o '\0')
	while (dest[i] != '\0')
	{
		i++;
	}
	// 2. Copia os caracteres de src para o final de dest
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// 3. Adiciona o caractere nulo no final da nova string unida
	dest[i] = '\0';
	// 4. Retorna a string de destino atualizada
	return (dest);
}