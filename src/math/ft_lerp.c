/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <vvaras@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 11:40:03 by vvaras            #+#    #+#             */
/*   Updated: 2019/01/02 11:41:29 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_lerp(double first, double second, double p)
{
	if (first == second)
		return (first);
	return (first + (second - first) * p);
}
