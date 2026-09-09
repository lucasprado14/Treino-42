#include <stdlib.h>

static int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

static char	*copy_word(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] != '\0' && !is_separator(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		words;

	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			result[i] = copy_word(str, charset);
			i++;
		}
		while (*str != '\0' && !is_separator(*str, charset))
			str++;
	}
	result[i] = NULL;
	return (result);
}