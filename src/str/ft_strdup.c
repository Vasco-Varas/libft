/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:23 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/04 14:56:33 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <errno.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*retstring;

	len = ft_strlen((char *)s1);
	retstring = (char*)ft_memalloc(sizeof(char) * (len + 1));
	if (retstring == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(retstring, s1);
	return (retstring);
}
