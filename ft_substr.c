/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:29:49 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 16:25:59 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*str;
	size_t	idx;
	size_t	src_len;

	idx = 0;
	src_len = ft_strlen(s);
	if (start >= src_len)
		return (ft_strdup(""));
	if (start + len > src_len)
		len = src_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	src_len = ft_strlen(s);
	while (idx < len && start < src_len && s[start])
	{
		str[idx] = s[start];
		idx++;
		start++;
	}
	str[idx] = '\0';
	return (str);
}
