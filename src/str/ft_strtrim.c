/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:28:24 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/05 16:10:03 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s)
{
	int srt;
	int fns;

	if (s == NULL)
		return (NULL);
	srt = 0;
	while (s[srt] == ' ' || s[srt] == '\n' || s[srt] == '\t')
		srt++;
	if (s[srt] == '\0')
		return (ft_strdup(s + srt));
	fns = ft_strlen((char *)s) - 1;
	while ((s[fns] == ' ' || s[fns] == '\n' || s[fns] == '\t') && fns > 0)
		fns--;
	return (ft_strsub(s, srt, fns - srt + 1));
}
