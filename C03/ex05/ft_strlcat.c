unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	// 1. Descobrir tamanho de dest e src
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	// 2. Caso de borda: buffer limite menor ou igual ao texto atual
	if (size <= dest_len)
		return (size + src_len);
	// 3. Copiar caracteres respeitando o limite (size - 1)
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// 4. Encerrar com '\0'
	dest[i] = '\0';
	// 5. Retornar tamanho total pretendido
	return (dest_len + src_len);
}