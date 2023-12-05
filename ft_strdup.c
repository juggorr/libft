/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:17:13 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 00:55:27 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(const char *str);

char	*ft_strdup(const char *str)
{
	unsigned int	len;
	unsigned int	idx;
	char			*p;

	len = ft_strlen(str);
	idx = 0;
	p = (char *)malloc(len + 1);
	if (!p)
		return (0);
	while (idx < len)
	{
		*(p + idx) = *(str + idx);
		idx++;
	}
	*(p + idx) = '\0';
	return (p);
}
