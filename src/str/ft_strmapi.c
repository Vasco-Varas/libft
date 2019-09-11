/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:24 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/02 09:58:45 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned in, char))
{
	int		i;
	char	*mstr;

	if (s == NULL || f == NULL)
		return (NULL);
	mstr = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (mstr == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		mstr[i] = f(i, s[i]);
	}
	mstr[i] = '\0';
	return (mstr);
}
