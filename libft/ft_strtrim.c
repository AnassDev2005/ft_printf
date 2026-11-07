/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anes-sal <anes-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:04:48 by anes-sal          #+#    #+#             */
/*   Updated: 2026/11/04 11:05:24 by anes-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]) != NULL)
	{
		end--;
	}
	str = ft_substr(s1 + start, 0, end - start);
	return (str);
}
