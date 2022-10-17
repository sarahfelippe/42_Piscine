/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:39:14 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/27 16:57:01 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;

	string1 = "ABCD";
	string2 = "ABcd";
	string3 = "ABCD";
	string4 = "@ABC";
	printf("s1 = %s\ns2 = %s\ns3 = %s\ns4 = %s\n\n", string1, string2, string3, string4);
	printf("Se a diferença for negativa, o primeiro caracter diferente da primeira string é menor que (anterior ao) da segunda na tabela ASCII; se for nula, as duas strings são exatamente iguais; se for positiva, o primeiro caracter diferente da primeira string é maior que (posterior ao) da segunda stringna tabela ASCII\n\n");
	printf("A comparação entre s1 e s2 é: %d\n", ft_strcmp(string1, string2));
	printf("A comparação entre s1 e s3 é: %d\n", ft_strcmp(string1, string3));
	printf("A comparação entre s1 e s4 é: %d\n", ft_strcmp(string1, string4));
	return (0);
}
