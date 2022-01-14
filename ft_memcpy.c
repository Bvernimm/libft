/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:15:29 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/13 09:25:13 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*sorc;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	sorc = src;
	while (n)
	{
		*dest = *sorc;
		n--;
		dest++;
		sorc++;
	}
	return (dst);
}
