/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:54 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/15 13:48:26 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			idx;
	unsigned char	uc;
	unsigned char	*tmp;

	idx = 0;
	uc = (unsigned char) c;
	tmp = s;
	while (idx++ < len)
		*tmp++ = uc;
	return (s);
}
