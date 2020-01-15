/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:34:41 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/13 14:34:18 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	static t_file	file[10240];
	int				len;
	int				ret;
	char			buffer_str[BUFF_SIZE + 1];

	if (read(fd, buffer_str, 0) < 0 || fd < 0 || fd > 10240 || line == NULL)
		return (-1);
	while ((ret = read(fd, buffer_str, BUFF_SIZE)))
	{
		ft_strconcat(&file[fd].head, buffer_str, ret);
		file[fd].reader = file[fd].head;
	}
	len = ft_strlento(file[fd].reader, '\n');
	if (!(*line = ft_strndup(file[fd].reader, len)))
		return (-1);
	if (*file[fd].reader == '\0')
	{
		free(file[fd].head);
		return (0);
	}
	file[fd].reader += len + (ft_strcontains('\n', file[fd].reader));
	return (1);
}
