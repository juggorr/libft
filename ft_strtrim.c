/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:25:51 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/07 13:58:00 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(const char *s);

char	is_in_set(char const *c, char const *set)
{
	while (*set)
	{
		if (*set == *c)
			return (1);
		set++;
	}
	return (0);
}

char	*allo_dst(char const *src, long long beg_idx, long long end_idx)
{
	char		*dst;
	long long	dst_idx;

	if (beg_idx > end_idx)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return (0);
		*dst = '\0';
	}
	else
	{
		dst_idx = 0;
		dst = (char *)malloc(sizeof(char) * (end_idx - beg_idx) + 2);
		if (!dst)
			return (0);
		while (beg_idx <= end_idx)
		{
			*(dst + dst_idx) = *(src + beg_idx);
			dst_idx++;
			beg_idx++;
		}
		dst[dst_idx] = '\0';
	}
	return (dst);
}

char	*ft_strtrim(char const *src, char const *set)
{
	long long	beg_idx;
	long long	end_idx;
	char		*dst;

	if (ft_strlen(src) == 0)
	{
		dst = allo_dst(src, 0, -1);
		if (!dst)
			return (0);
		return (dst);
	}
	beg_idx = 0;
	end_idx = (long long)ft_strlen(src) - 1;
	while (is_in_set(&src[beg_idx], set))
		beg_idx++;
	while (is_in_set(&src[end_idx], set))
		end_idx--;
	dst = allo_dst(src, beg_idx, end_idx);
	if (!dst)
		return (0);
	return (dst);
}
