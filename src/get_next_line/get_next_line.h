/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:18:02 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/13 14:30:38 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include "../../includes/libft.h"

# include "unistd.h"
# include "stdlib.h"
# include "sys/types.h"
# include "sys/uio.h"

# define BUFF_SIZE 64

int				get_next_line(int fd, char **file);

typedef struct	s_file
{
	char		*head;
	char		*reader;
}				t_file;

#endif
