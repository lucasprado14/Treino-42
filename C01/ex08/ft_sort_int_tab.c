#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	trocou;

	trocou = 1;
	// O loop de fora roda enquanto houver alguma troca acontecendo
	while (trocou == 1)
	{
		trocou = 0; // Assume que o array já está ordenado nesta rodada
		i = 0;
		// O loop de dentro caminha até o penúltimo elemento (size - 1)
		while (i < size - 1)
		{
			// Se o elemento atual for MAIOR que o próximo (vizinho da direita)
			if (tab[i] > tab[i + 1])
			{
				// Faz o swap usando o nosso copo reserva
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				
				trocou = 1; // Avisa o loop de fora que o array ainda precisava de ajuste
			}
			i++;
		}
	}
}

int	main(void)
{
	// Um array com 6 elementos totalmente desordenados
	int	meu_array[6] = {42, -5, 2, 100, 2, 0};
	int	i;

	printf("Antes da ordenação: ");
	i = 0;
	while (i < 6)
	{
		printf("%d ", meu_array[i]);
		i++;
	}
	printf("\n");

	// Chama a sua função passando o array e o tamanho dele (6)
	ft_sort_int_tab(meu_array, 6);

	printf("Depois da ordenação: ");
	i = 0;
	while (i < 6)
	{
		printf("%d ", meu_array[i]);
		i++;
	}
	printf("\n");

	return (0);
}