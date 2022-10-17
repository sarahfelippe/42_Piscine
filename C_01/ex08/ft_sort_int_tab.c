/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:07:50 by sfelippe          #+#    #+#             */
/*   Updated: 2022/07/24 15:19:25 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	v;

	v = 0;
	while (v != size - 1)
	{
		i = 0;
		while (i != size - 1)
		{
			if (tab[i] > tab[i +1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
	v++;
	}
}
