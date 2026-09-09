unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	// 1. Descobrimos o tamanho total de src
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	// 2. Se o tamanho do buffer de destino for 0, não copiamos nada
	if (size == 0)
	{
		return (src_len);
	}
	// 3. Copiamos enquanto houver caracteres e enquanto sobrar espaço para o '\0' final (size - 1)
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	// 4. Garantimos que a string de destino seja encerrada corretamente
	dest[i] = '\0';
	// 5. Retornamos SEMPRE o comprimento da origem inteira
	return (src_len);
}