/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:14:10 by vvaras            #+#    #+#             */
/*   Updated: 2018/12/02 10:32:58 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *topnode;

	topnode = *alst;
	*alst = new;
	new->next = topnode;
}
