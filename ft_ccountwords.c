/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ccountwords.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:20:08 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/18 19:46:40 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ccountwords(char const *s, char c)
{
	int wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			wordcount++;
			s++;
		}
		while (*s != c && *s)
			s++;
	}
	return (wordcount);
}
