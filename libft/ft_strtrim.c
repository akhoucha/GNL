/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 06:26:02 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/30 06:37:05 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		size;
	int		i;
	int		j;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	size = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		++i;
	while (s[i + size])
		++size;
	--size;
	while (size != -1 &&
			(s[i + size] == ' ' || s[i + size] == '\t' || s[i + size] == '\n'))
		--size;
	if (!(ret = malloc(sizeof(char) * (size + 2))))
		return (NULL);
	j = 0;
	while (j <= size)
		ret[j++] = s[i++];
	ret[j] = 0;
	return (ret);
}
