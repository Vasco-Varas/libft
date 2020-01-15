/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fconv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascovaras <vascovaras@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 10:20:30 by vascovaras        #+#    #+#             */
/*   Updated: 2019/03/18 14:29:44 by vascovaras       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include "ft_printf.h"


size_t	ft_strlenfc(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoinfc(const char *s1, const char *s2)
{
	char	*str;
	int		i;

	i = -1;
	if (!s1 || !s2 || !(str = malloc(sizeof(char)
	* ft_strlenfc(s1) + ft_strlenfc(s2) + 1)))
		return (NULL);
	while (*s1)
	{
		str[++i] = *s1;
		s1++;
	}
	while (*s2)
	{
		str[++i] = *s2;
		s2++;
	}
	str[++i] = '\0';
	return (str);
}

char	*ft_strdupfc(const char *s1)
{
	size_t	len;
	void	*new;

	len = ft_strlenfc(s1) + 1;
	new = malloc(len);
	return (new == NULL ? NULL : (char *)ft_memcpy(new, s1, len));
}
