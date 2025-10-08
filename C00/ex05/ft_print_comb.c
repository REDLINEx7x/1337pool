/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:30:18 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/13 19:07:52 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	r;
	int	e;
	int	d;

	r = '0';
	while (r <= '7')
	{
		e = r + 1;
		while (e <= '8')
		{
			d = e + 1;
			while (d <= '9')
			{
				ft_putchar(r);
				ft_putchar(e);
				ft_putchar(d);
				if (!(r == '7' && e == '8' && d == '9'))
					write(1, ", ", 2);
				d++;
			}
			e++;
		}
		r++;
	}
}
