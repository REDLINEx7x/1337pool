/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:36:42 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/27 17:13:01 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*room;

	room = *a;
	*a = *b;
	*b = room;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	j = 1;
		while (j < ac - 1)
		{
			i = j + 1;
			while (i < ac)
			{
				if (ft_strcmp(av[j], av[i]) > 0)
				{
					ft_swap(&av[j], &av[i]);
				}
				i++;
			}
			j++;
		}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}		
}
