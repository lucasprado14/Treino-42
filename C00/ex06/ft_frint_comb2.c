#include <unistd.h>


void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	char	digito;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			digito = (num1 / 10) + '0';
			write(1, &digito, 1);
			digito = (num1 % 10) + '0';
			write(1, &digito, 1);
			write(1, " ", 1);
			digito = (num2 / 10) + '0';
			write(1, &digito, 1);
			digito = (num2 % 10) + '0';
			write(1, &digito, 1);
			if (!(num1 == 98 && num2 == 99))
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

int    main(void)

{

    ft_print_comb2();

    return (0);

}