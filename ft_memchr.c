/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:12:32 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 12:18:15 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	uc;
	unsigned char	*tmp;

	idx = 0;
	uc = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (idx < n)
	{
		if (*(tmp + idx) == uc)
			return ((void *)(tmp + idx));
		idx++;
	}
	return (0);
}
