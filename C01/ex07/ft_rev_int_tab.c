#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fim;
	int	temp;

	inicio = 0;
	fim = size - 1;
	// O loop roda enquanto as pontas não se cruzarem no meio
	while (inicio < fim)
	{
		// 1. Guarda o valor do início no copo reserva
		temp = tab[inicio];
		
		// 2. Passa o valor do fim para a casa do início
		tab[inicio] = tab[fim];
		
		// 3. Coloca o valor do copo reserva na casa do fim
		tab[fim] = temp;

		// 4. Aproxima os dois ponteiros em direção ao centro
		inicio++;
		fim--;
	}
}


int	main(void)
{
	int	meu_array[5] = {10, 20, 30, 40, 50};
	int	i;

	printf("Antes da inversão: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", meu_array[i]);
		i++;
	}
	printf("\n");

	// Chama a função passando o array e o tamanho dele
	ft_rev_int_tab(meu_array, 5);

	printf("Depois da inversão: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", meu_array[i]);
		i++;
	}
	printf("\n");

	return (0);
}