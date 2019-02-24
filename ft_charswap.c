/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:41:49 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/18 14:54:05 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_charswap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}