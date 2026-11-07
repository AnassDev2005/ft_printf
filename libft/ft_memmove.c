/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:02:18 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/04 11:05:22 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if ((size_t)p > (size_t)s)
	{
		while (n--)
			p[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	return (dest);
}
