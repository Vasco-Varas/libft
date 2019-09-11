/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:24:19 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 14:51:02 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srct;
	unsigned char	*dstt;

	i = 0;
	srct = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	while (i < n)
	{
		dstt[i] = srct[i];
		if (srct[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
