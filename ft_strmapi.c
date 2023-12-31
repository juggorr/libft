/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:34:45 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 09:18:21 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*dst;
	size_t	idx;

	len = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	idx = 0;
	while (idx < len)
	{
		dst[idx] = f(idx, s[idx]);
		idx++;
	}
	dst[idx] = '\0';
	return (dst);
}
