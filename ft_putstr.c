/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:34:55 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/15 22:55:11 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
