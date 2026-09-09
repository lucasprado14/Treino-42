void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[] = "Bonjour les aminches\t\n\rc  est fou\ttout\tce qu on peut faire avec\t\tprint_memory\n\n\n\tis.lol.big.30";

	// Imprime a área de memória com 92 bytes de tamanho
	ft_print_memory(str, 92);
	return (0);
}