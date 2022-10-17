/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:58:18 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/28 10:40:04 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;

	string1 = "ABCD";
	string2 = "ABcd";
	string3 = "ABCd";
	string4 = "@ABC";
	printf("s1 = %s\ns2 = %s\ns3 = %s\ns4 = %s\n", string1, string2, string3, string4);
	printf("n = 3\n\n");
	printf("Se a diferença for negativa, o primeiro caracter diferente da primeira string é menor que (anterior ao) da segunda na tabela ASCII; se for nula, as duas strings são exatamente iguais; se for positiva, o primeiro caracter diferente da primeira string é maior que (posterior ao) da segunda stringna tabela ASCII\n\n");
	printf("A comparação entre s1 e s2 até o terceiro caracter é: %d\n", ft_strncmp(string1, string2, 3));
	printf("A comparação entre s1 e s3 até o terceiro caracter é: %d\n", ft_strncmp(string1, string3, 3));
	printf("A comparação entre s1 e s4 até o terceiro caracter é: %d\n", ft_strncmp(string1, string4, 3));
	return (0);
}
