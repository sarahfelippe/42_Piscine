/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:47:45 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/28 11:43:57 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	string1[] = "Tudo bem?";
	char	string2[] = " Sim, e vc?";

	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("string_final = %s\n", ft_strcat(string1, string2));
	return (0);
}
