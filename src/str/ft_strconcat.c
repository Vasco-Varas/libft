/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:05:13 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/12 15:47:51 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_strconcat(char **str, char *buf, int bsize)
{
	char *tmp;

	buf[bsize] = '\0';
	if (!(*str))
		*str = (char *)malloc(sizeof(char) * 1);
	if (*str)
	{
		tmp = *str;
		*str = ft_strjoin(*str, buf);
		free(tmp);
	}
}
