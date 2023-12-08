/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:18:02 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 12:43:18 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		from = (unsigned char *)src;
		to = (unsigned char *)dst;
		while (len--)
			*to++ = *from++;
	}
	else
	{
		from = (unsigned char *)src + len - 1;
		to = (unsigned char *)dst + len - 1;
		while (len--)
			*to-- = *from--;
	}
	return (dst);
}
