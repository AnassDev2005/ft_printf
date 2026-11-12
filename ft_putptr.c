/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:37:27 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/12 17:51:41 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	int				ret;
	unsigned long	p;
	char			*hex;

	count = 0;
	hex = "0123456789abcdef";
	p = (unsigned long)ptr;
	if (!p)
		return (ft_putstr("(nil)"));
	ret = ft_putstr("0x");
	if (ret < 0)
		return (-1);
	count += ret;
	ret = ft_base16(p, hex);
	if (ret < 0)
		return (-1);
	count += ret;
	return (count);
}
