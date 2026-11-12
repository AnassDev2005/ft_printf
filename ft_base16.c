/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:05:14 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/12 17:41:24 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base16(unsigned long addr, char *base)
{
	int	count;
	int	ret;

	count = 0;
	if (addr > 15)
	{
		ret = ft_base16(addr / 16, base);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(base[addr % 16]);
	if (ret < 0)
		return (-1);
	return (count + ret);
}
