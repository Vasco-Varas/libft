/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:22 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/02 09:26:38 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int eos1;

	eos1 = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[i + eos1] = s2[i];
		i++;
	}
	s1[i + eos1] = '\0';
	return (s1);
}
