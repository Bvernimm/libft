/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:00:27 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 09:21:18 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	a;
	size_t			i;

	str = (char *)s;
	a = (unsigned char)c;
	i = 0;
	while (str[i] != '\0' && i < n - 1 && str[i] != a)
		i++;
	if (str[i] == a)
		return (&str[i]);
	return (NULL);
}
