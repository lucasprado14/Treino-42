int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resultado = 1;
	while (power > 0)
	{
		resultado *= nb;
		power--;
	}
	return (resultado);
}