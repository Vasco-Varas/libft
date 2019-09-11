/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <vvaras@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 15:48:14 by vvaras            #+#    #+#             */
/*   Updated: 2019/01/11 15:53:11 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_strchrpos(const char *str, char c)
{
	int i;

	i = 0;
	if(str == NULL)
		return(-1);
	while(str[i])
	{
		if(str[i] == c)
			return(i);
		i++;
	}
	return(-1);
}
