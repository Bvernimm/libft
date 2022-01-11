/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:27:30 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 12:03:07 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_sep(char c, char set)
{
	if (c == '\0')
		return (1);
	if (c == set)
		return (1);
	return (0);
}

int	length(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (check_sep(str[i + 1], c) == 1
			&& check_sep(str[i], c) == 0)
			count++;
		i++;
	}
	return (count);
}

void	tab_add(char *tab, char *from, char c)
{
	int	i;

	i = 0;
	while (check_sep(from[i], c) == 0)
	{
		tab[i] = from[i];
		i++;
	}
	tab[i] = '\0';
}

void	too_many_line(char **tab, char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (check_sep(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], c) == 0)
				j++;
			tab[k] = (char *) malloc (sizeof(char) * (j + 1));
			tab_add(tab[k], str + i, c);
			k++;
			i = i + j;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	tab = NULL;
	count = length((char *)s, c);
	tab = (char **) malloc (sizeof(char *) * (count + 1));
	too_many_line(tab, (char *)s, c);
	tab[count] = 0;
	return (tab);
}