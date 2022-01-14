/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:30:51 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/13 09:39:28 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;
	int			a;

	if ((!dst && !src) || len <= 0)
		return (dst);
	dest = dst;
	sorc = src;
	a = 1;
	if (dst > src)
	{
		dest = dest + len - 1;
		sorc = sorc + len - 1;
		a = -1;
	}
	while (len)
	{
		*dest = *sorc;
		len--;
		dest = dest + a;
		sorc = sorc + a;
	}
	return (dst);
}
