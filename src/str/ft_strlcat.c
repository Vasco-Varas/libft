/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:23 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 12:55:08 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t eos1;

	i = ft_strlen((char *)dst);
	if (size <= i)
		return (ft_strlen((char *)src) + size);
	if (i > size)
		i = size;
	eos1 = i;
	while (src[i - eos1] && i < size - 1)
	{
		dst[i] = src[i - eos1];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (eos1 + ft_strlen((char *)src));
}
