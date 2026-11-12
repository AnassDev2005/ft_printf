/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:03:04 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/12 18:24:43 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	nb;
	int		count;
	int		ret;

	nb = nbr;
	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		ret = write(1, "-", 1);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	if (nb > 9)
	{
		ret = ft_putnbr(nb / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((nb % 10) + '0');
	if (ret < 0)
		return (-1);
	return (count + ret);
}
