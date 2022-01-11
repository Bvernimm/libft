/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:57:05 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 09:20:21 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*tab;

	tab = NULL;
	tab = malloc(size * count);
	if (tab == NULL)
		return (tab);
	ft_bzero(tab, (size * count));
	return (tab);
}
