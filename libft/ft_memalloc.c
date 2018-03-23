/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 05:10:29 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/30 05:17:24 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *m;

	m = (int*)malloc((size) * sizeof(*m));
	if (m == NULL)
		return (NULL);
	ft_memset(m, 0, size);
	return (m);
}
