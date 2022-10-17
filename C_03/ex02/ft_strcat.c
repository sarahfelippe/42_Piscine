/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:49:32 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/28 11:43:53 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int is;

	id = 0;
	while (dest[id] != 0)
	{
		id++;
	}
	is = 0;
	while (src[is] != 0)
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = 0;
	return (dest);
}
