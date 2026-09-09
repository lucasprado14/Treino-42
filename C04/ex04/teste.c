#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	write(1, "--- Decimal (42) -> ", 20);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	write(1, "--- Binário (42) -> ", 20);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	write(1, "--- Hexadecimal (255) -> ", 25);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	write(1, "--- Negativo (-2147483648 Hex) -> ", 34);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n", 1);

	write(1, "--- Base Inválida (Repetida) -> ", 32);
	ft_putnbr_base(42, "0123445"); // Não deve imprimir nada
	write(1, "\n", 1);

	return (0);
}