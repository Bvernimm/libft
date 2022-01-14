/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:51:00 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/14 09:59:37 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	nb;
	int		neg;
	int		i;

	nb = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = -neg;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((nb > 2147483647)
			&& neg > 0)
			return (-1);
		if ((nb > 2147483648)
			&& neg < 0)
			return (0);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}
