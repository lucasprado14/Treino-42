int	ft_iterative_factorial(int nb)
{
	int	resultado;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	resultado = 1;
	while (nb > 0)
	{
		resultado *= nb;
		nb--;
	}
	return (resultado);
}
