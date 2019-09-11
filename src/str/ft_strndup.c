/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:22:44 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/10 15:38:57 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <errno.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*retstring;

	retstring = (char*)ft_memalloc(sizeof(char) * (n + 1));
	if (retstring == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strncpy(retstring, s1, n);
	return (retstring);
}
