/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:20:55 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 16:11:38 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*src;
	char	*dst;
	size_t	size;

	src = (char *)s1;
	dst = (char *)s2;
	size = ft_strlen(dst);
	if (s1 == NULL || s2 == NULL)
		src[size] = src[size];
	if (size == 0)
		return (char *)(src);
	if (size > n)
		return ((char *)NULL);
	while (n-- >= size && *src)
	{
		if (ft_strncmp(src, dst, size) == 0)
			return ((char *)src);
		src++;
	}
	return ((char *)NULL);
}
