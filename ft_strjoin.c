/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:56 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 09:19:05 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	fill(char *str, size_t str_idx, char const *s1, char const *s2)
{
	size_t	idx;

	idx = 0;
	while (idx < ft_strlen(s1))
	{
		str[str_idx] = s1[idx];
		idx++;
		str_idx++;
	}
	idx = 0;
	while (idx < ft_strlen(s2))
	{
		str[str_idx] = s2[idx];
		idx++;
		str_idx++;
	}
	str[str_idx] = '\0';
	return ;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	str_idx;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	str_idx = 0;
	fill(str, str_idx, s1, s2);
	return (str);
}
