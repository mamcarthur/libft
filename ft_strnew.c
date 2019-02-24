/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:03:54 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/15 17:09:13 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *t;

	t = malloc(size + 1);
	if (!t)
		return (NULL);
	bzero(t, size + 1);
	return (t);
}