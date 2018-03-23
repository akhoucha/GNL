/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 23:19:58 by akhoucha          #+#    #+#             */
/*   Updated: 2018/03/22 18:50:51 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*sret;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	sret = (char *)malloc(sizeof(*s1) * (i + 1));
	if (!sret)
		return (sret);
	i = 0;
	while (s1[i])
	{
		sret[i] = s1[i];
		i++;
	}
	sret[i] = '\0';
	return (sret);
}
