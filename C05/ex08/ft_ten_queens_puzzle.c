#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Verifica se é seguro colocar a rainha na posição (col, row)
int	is_valid(int board[10], int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		// Verifica se está na mesma linha ou na mesma diagonal
		if (board[i] == row)
			return (0);
		if ((col - i) == (row - board[i]) || (col - i) == (board[i] - row))
			return (0);
		i++;
	}
	return (1);
}

// Imprime a solução de 10 dígitos seguida de quebra de linha
void	print_board(int board[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

// Função recursiva com backtracking
void	solve(int board[10], int col, int *count)
{
	int	row;

	if (col == 10)
	{
		print_board(board);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_valid(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}