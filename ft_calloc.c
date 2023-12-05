/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:28 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 18:11:43 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern void	ft_bzero(void *b, size_t len);

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	p = malloc(size * number);
	if (!p)
		return (0);
	ft_bzero(p, size * number);
	return (p);
}
