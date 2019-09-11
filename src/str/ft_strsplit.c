/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:24 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 16:13:45 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**sarray;
	int		wammount;
	int		i;

	if (s == NULL || c == '\0')
		return (NULL);
	i = 0;
	wammount = ft_strcountsplit((const char*)s, c);
	sarray = (char**)malloc(sizeof(*sarray) * (wammount + 1));
	if (sarray == NULL)
		return (NULL);
	while (wammount--)
	{
		while (*s == c && *s != '\0')
			s++;
		sarray[i] = ft_strsub((const char*)s, 0,
				ft_strlento((const char*)s, c));
		if (sarray[i] == NULL)
			return (NULL);
		s = s + ft_strlento(s, c);
		i++;
	}
	sarray[i] = NULL;
	return (sarray);
}
