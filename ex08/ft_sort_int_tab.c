/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:20:14 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/16 21:24:56 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	r;
	int	e;
	int	room;

	r = 0;
	while (r < size - 1)
	{
		e = r + 1;
		while (e < size)
		{
			if (tab[r] > tab[e])
			{
				room = tab[r];
				tab[r] = tab[e];
				tab[e] = room;
			}
			e++;
		}
		r++;
	}
}
