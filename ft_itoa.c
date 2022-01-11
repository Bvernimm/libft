/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:04:27 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/11 13:49:52 by bvernimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ten(int n)
{
	int		ten;
	long	nbr;

	ten = 0;
	if (n < 0)
	{
		nbr = n;
		nbr = -nbr;
		ten++;
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		nbr = nbr - (nbr % 10);
		nbr = nbr / 10;
		ten++;
	}
	return (ten);
}

void	ft_makestr(char *str, int n, int ten)
{
	long	nbr;
	int		i;

	i = 1;
	if (n < 0)
	{
		nbr = n;
		nbr = -nbr;
		str[0] = '-';
		while (i < ten)
		{
			str[ten - i] = (nbr % 10) + '0';
			nbr = nbr / 10;
			i++;
		}
	}
	while (i <= ten && n > 0)
	{
		str[ten - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		ten;

	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	ten = ft_ten(n);
	str = malloc(sizeof(char) * ten + 1);
	ft_makestr(str, n, ten);
	return (str);
}
