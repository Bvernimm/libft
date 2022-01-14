/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvernimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:04:27 by bvernimm          #+#    #+#             */
/*   Updated: 2022/01/14 10:33:51 by bvernimm         ###   ########.fr       */
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
		nbr = nbr / 10;
		ten++;
	}
	return (ten);
}

void	ft_strrev(char *str)
{
	char	tmp;
	int		start;
	int		stop;

	start = 0;
	stop = ft_strlen(str) - 1;
	if (str[start] == '-')
		start++;
	while (str[start] && start < stop)
	{
		tmp = str[start];
		str[start] = str[stop];
		str[stop] = tmp;
		start++;
		stop--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * ft_ten(n) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		str[i++] = '-';
	}
	while (n)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
