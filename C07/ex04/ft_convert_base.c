#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_get_val(char c, char *base);
int		ft_nbr_len(long nbr, int base_len);

static int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	val;
	int	base_len;

	sign = 1;
	res = 0;
	base_len = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	val = ft_get_val(*str, base);
	while (val != -1)
	{
		res = (res * base_len) + val;
		str++;
		val = ft_get_val(*str, base);
	}
	return (res * sign);
}

static char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	long	n;
	char	*str;

	base_len = ft_strlen(base);
	n = nbr;
	len = ft_nbr_len(n, base_len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = base[0];
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	decimal_val;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	decimal_val = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(decimal_val, base_to));
}