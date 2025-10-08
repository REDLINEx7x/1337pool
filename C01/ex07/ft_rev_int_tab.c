/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:22:13 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/16 21:30:49 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	room;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		room = tab[first];
		tab[first] = tab[last];
		tab[last] = room;
		first++;
		last--;
	}
}
