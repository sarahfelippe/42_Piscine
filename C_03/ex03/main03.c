/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:44:43 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/28 12:01:40 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	string1[] = "Tudo bem?";
	char	string2[] = " Sim, e vc?";

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", ft_strncat(string1, string2));
	return (0);
}
