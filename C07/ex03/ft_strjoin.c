#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strcpy_end(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*ptr;
	int		i;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (result == NULL)
		return (NULL);
	ptr = result;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy_end(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcpy_end(ptr, sep);
		i++;
	}
	*ptr = '\0';
	return (result);
}