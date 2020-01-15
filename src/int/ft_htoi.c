/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vascovaras <vascovaras@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 12:09:35 by vvaras            #+#    #+#             */
/*   Updated: 2019/03/15 10:33:56 by vascovaras       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/libft.h"

int ft_htoi(char *hex) {
	int val = 0;
	while (*hex) {
		int byte = *hex++;
		if (byte >= '0' && byte <= '9') byte = byte - '0';
		else if (byte >= 'a' && byte <='f') byte = byte - 'a' + 10;
		else if (byte >= 'A' && byte <='F') byte = byte - 'A' + 10;
		val = (val << 4) | (byte & 0xF);
	}
	return val;
}

int ft_htoi_char(char hex) {
	if (hex >= '0' && hex <= '9')
		return ((hex - '0') & 0xF);
	else if (hex >= 'a' && hex <='f')
		return ((hex - 'a' + 10) & 0xF);
	else if (hex >= 'A' && hex <='F')
		return ((hex - 'A' + 10) & 0xF);
	else
		return 0;
}