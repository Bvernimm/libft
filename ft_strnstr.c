/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:26:02 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 09:22:37 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	c;
	size_t	b;

	a = 0;
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		c = 0;
		if (haystack[a] == needle[c])
		{
			b = a;
			while (haystack[a] == needle[c] && a < len)
			{
				if (needle[c + 1] == '\0')
					return ((char *)haystack + b);
				a++;
				c++;
			}
			a = b;
		}
		a++;
	}
	return (NULL);
}
