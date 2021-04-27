/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonarch <mmonarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:49:05 by mmonarch          #+#    #+#             */
/*   Updated: 2021/04/20 19:51:54 by mmonarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int 	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
