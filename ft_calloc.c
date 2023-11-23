/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:28 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/23 18:15:48 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;
	size_t	idx;

	p = malloc(sizeof(size) * number);
	idx = 0;
	while (idx < size * number)
	{
		*(p + idx) = 0;
		idx++;
	}
	return (p);
}
