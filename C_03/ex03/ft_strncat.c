/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:44:33 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/28 12:01:44 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	id;
	int	is;

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
