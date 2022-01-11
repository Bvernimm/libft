/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:02:52 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 11:27:11 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_stop(char *s1, char *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - i]) == NULL)
			return (len - i);
		i++;
	}
	return (len - i);
}

int	ft_start(char *s1, char *set)
{
	int	i;

	i = 0;
	while (i < ft_strlen(s1))
	{
		if (ft_strchr(set, s1[i]) == NULL)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		stop;
	int		len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_start((char *)s1, (char *)set);
	stop = ft_stop((char *)s1, (char *)set);
	len = ft_strlen((char *)s1) - start - (ft_strlen((char *)s1 - stop));
	if (start >= stop)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (str);
	ft_strlcpy(str, s1 + start, stop - start + 1);
	return (str);
}
