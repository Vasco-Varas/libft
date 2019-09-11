/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:11:35 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 16:07:48 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	atoi_isschar(char c)
{
	if (c == ' '
		|| c == '\n'
		|| c == '\v'
		|| c == '\t'
		|| c == '\r'
		|| c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long long			negativemult;
	unsigned long long	res;
	int					i;

	while (atoi_isschar(*str))
		str++;
	negativemult = 1;
	res = 0;
	i = 0;
	if (*str == '-' || *str == '+')
	{
		negativemult = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		i++;
		res = (res * 10) + (unsigned long long)(*str - '0');
		str++;
	}
	if (i >= 19 || res >= 9223372036854775807)
	{
		return (negativemult == -1 ? 0 : -1);
	}
	return (res * negativemult);
}
