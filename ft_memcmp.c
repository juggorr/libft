/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:19:55 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 12:18:52 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	idx = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (idx < n)
	{
		if (*(tmp1 + idx) != *(tmp2 + idx))
			return (*(tmp1 + idx) - *(tmp2 + idx));
		idx++;
	}
	return (0);
}
