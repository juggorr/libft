/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:18:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/08 21:27:26 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*to;
	unsigned char	*from;

	idx = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (dst == src || !n)
		return (dst);
	if (!dst && !src)
		return (0);
	while (idx < n)
	{
		*(to + idx) = *(from + idx);
		idx++;
	}
	return (dst);
}
