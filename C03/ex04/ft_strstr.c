/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:16:09 by moamhouc          #+#    #+#             */
/*   Updated: 2025/08/23 21:11:11 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a])
	{
		c = 0;
		b = a;
		while (to_find[c] && str[b] == to_find[c])
		{
			b++;
			c++;
		}
		if (to_find[c] == '\0')
		{
			return (&str[a]);
		}
		a++;
	}
	return (0);
}
