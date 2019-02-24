/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:39:50 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/14 16:20:14 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] == s2[index])
			index++;
		else if (s1[index] > s2[index] || s1[index] < s2[index])
		{
			return (*((unsigned char *)s1 + index)
					- *((unsigned char *)s2 + index));
		}
	}
	return (0);
}
