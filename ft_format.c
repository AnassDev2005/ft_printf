/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:44:37 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/12 18:58:26 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char **format, va_list *args)
{
	int	count;

	(*format)++;
	if (!**format)
		return (0);
	count = 0;
	if (**format == 'c')
		count = ft_putchar(va_arg(*args, int));
	else if (**format == 's')
		count = ft_putstr(va_arg(*args, char *));
	else if (**format == 'p')
		count = ft_putptr(va_arg(*args, void *));
	else if (**format == 'd' || **format == 'i')
		count = ft_putnbr(va_arg(*args, int));
	else if (**format == 'u')
		count = ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (**format == 'x' || **format == 'X')
		count = ft_puthex(va_arg(*args, unsigned int), **format);
	else if (**format == '%')
		count = ft_putchar('%');
	else
		return (ft_putchar('%'));
	(*format)++;
	return (count);
}
