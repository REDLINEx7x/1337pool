/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:20:17 by moamhouc          #+#    #+#             */
/*   Updated: 2025/09/01 12:42:02 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	strslen(char **strs, char *sep, int size)
{
	int	sep_len;
	int	all_len;
	int	i;

	i = 0;
	all_len = 0;
	while (i < size)
	{
		all_len = all_len + ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	all_len += sep_len * (size - 1);
	return (all_len);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *final_str)
{
	int	i;
	int	j;
	int	f;
	int	s;

	j = 0;
	f = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			final_str[f] = strs[j][i++];
			f++;
		}
		if (j < size - 1)
		{
			s = 0;
			while (sep[s])
				final_str[f++] = sep[s++];
		}
		j++;
	}
	final_str[f] = '\0';
	return (final_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*final_str;
	char	*empty;
	char	*res;

	if (size == 0)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	total_len = strslen(strs, sep, size);
	final_str = malloc(total_len + 1);
	if (!final_str)
	{
		return (NULL);
	}
	res = ft_strcpy(size, strs, sep, final_str);
	return (res);
}
