/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:30:51 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 09:21:37 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;
	int			a;

	dest = dst;
	sorc = src;
	a = 1;
	if (dst > src)
	{
		dest = dest + len;
		sorc = sorc + len;
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
