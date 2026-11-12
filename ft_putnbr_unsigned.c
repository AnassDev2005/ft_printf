/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:38:59 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/12 18:52:02 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int	count;
	int	ret;

	count = 0;
	if (nbr > 9)
	{
		ret = ft_putnbr_unsigned(nbr / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((nbr % 10) + '0');
	if (ret < 0)
		return (-1);
	count += ret;
	return (count);
}
