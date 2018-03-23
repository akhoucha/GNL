/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 22:05:39 by akhoucha          #+#    #+#             */
/*   Updated: 2018/03/20 22:07:10 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char *s1, char *s2, int n)
{
	int		l1;
	int		l2;
	char	*ret;

	l1 = 0;
	l2 = 0;
	if (!(ret = ft_strnew(ft_strlen(s1) + n + 1)))
		return (NULL);
	while (s1[l1])
	{
		ret[l1] = s1[l1];
		l1++;
	}
	while (s2[l2] && l2 < n)
		ret[l1++] = s2[l2++];
	ret[l1] = 0;
	return (ret);
}
