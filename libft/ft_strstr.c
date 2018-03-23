/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 22:28:51 by akhoucha          #+#    #+#             */
/*   Updated: 2017/12/01 11:49:24 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int k;
	int len;

	i = 0;
	k = 0;
	len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[k] == haystack[i + k])
		{
			if (k == len - 1)
				return ((char*)haystack + i);
			k++;
		}
		k = 0;
		i++;
	}
	return (NULL);
}
