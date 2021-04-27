/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:01:01 by mmonarch          #+#    #+#             */
/*   Updated: 2021/04/27 15:06:51 by mmonarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *haystack, const char*needle, size_t len)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	if (needle[nb] == '\0')
		return ((char *)haystack);
	while (len > i && haystack[i] != '\0')
	{
		while (haystack[i] == needle[nb] && len > i)
		{
			i++;
			nb++;
			if (needle[nb] == '\0')
				return ((char *)&haystack[i - nb]);
			if (needle[nb] != haystack[i])
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
