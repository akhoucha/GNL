/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 23:55:52 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/30 00:41:37 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;
	size_t n;

	i = 0;
	k = 0;
	n = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (i < len && haystack[i])
	{
		while (needle[k] == haystack[i + k] && (k + i) < len && haystack[i + k])
		{
			if (k == n - 1)
				return ((char*)haystack + i);
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
