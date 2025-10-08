/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:29:06 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/14 11:12:53 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	r;
	int	e;

	r = 0;
	while (r <= 98)
	{
		e = r + 1;
		while (e <= 99)
		{
			ft_putchar(r / 10 + '0');
			ft_putchar(r % 10 + '0');
			ft_putchar(' ');
			ft_putchar(e / 10 + '0');
			ft_putchar(e % 10 + '0');
			if (r != 98)
				write(1, ", ", 2);
			e++;
		}
		r++;
	}
}
