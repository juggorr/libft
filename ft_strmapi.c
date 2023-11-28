/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:34:45 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/28 19:36:40 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

extern size_t	ft_strlen(char const *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	size_t	idx;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	idx = 0;
	while (idx < len)
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	return (str);
}
