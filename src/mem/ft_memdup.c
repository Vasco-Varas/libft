/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <vvaras@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 15:12:18 by vvaras            #+#    #+#             */
/*   Updated: 2019/01/02 15:12:27 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *s, size_t n)
{
	void *rmem;

	rmem = malloc(sizeof(unsigned char) * n);
	if (rmem == NULL)
		return (NULL);
	ft_memcpy(rmem, s, n);
	return (rmem);
}
