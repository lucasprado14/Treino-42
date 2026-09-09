int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// Se o caractere NÃO for uma letra minúscula AND NÃO for uma letra maiúscula...
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			// ...encontramos um intruso! Retorna 0 imediatamente.
			return (0);
		}
		i++;
	}
	// Se o while terminou sem disparar o 'if', a string está limpa
	return (1);
}


#include <stdio.h>


int	main(void)
{
	char	*texto_valido = "42Piscine"; // Tem números, deve retornar 0
	char	*texto_perfeito = "42";      // Opa, esse falha feio, retorna 0
	char	*so_letras = "Piscine";       // Puramente alfabético, retorna 1
	char	*vazio = "";                 // String vazia, deve retornar 1 por regra

	printf("Apenas letras '%s'?: %d\n", so_letras, ft_str_is_alpha(so_letras));
    printf("Apenas letras '%s'?: %d\n", texto_perfeito, ft_str_is_alpha(texto_perfeito));
	printf("Apenas letras '%s'?: %d\n", texto_valido, ft_str_is_alpha(texto_valido));
	printf("Apenas letras (vazio)?: %d\n", ft_str_is_alpha(vazio));

	return (0);
}