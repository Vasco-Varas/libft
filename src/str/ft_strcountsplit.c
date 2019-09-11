/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:23 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/01 11:17:29 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strcountsplit(const char *s, char c)
{
	int ammount;
	int block;

	block = 0;
	ammount = 0;
	while (*s != '\0')
	{
		if (block && *s == c)
		{
			block = 0;
		}
		if (!block && *s != c)
		{
			block = 1;
			ammount++;
		}
		s++;
	}
	return (ammount);
}
