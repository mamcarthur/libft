/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countspacedwords.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:21:12 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/02/18 20:05:50 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_countspacedwords(char const *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		if (*s != ' ' && *s != '\n' && *s != '\t' && *s)
			count++;
		while (*s != ' ' && *s != '\n' && *s != '\t' && *s)
			s++;
	}
	return (count);
}
