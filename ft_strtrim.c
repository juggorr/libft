/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:46:26 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 19:31:54 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(char const *s1);

int	ft_isinset(char const *s1, char const *set, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		if (*s1 == *(set + idx))
			return (1);
		idx++;
	}
	return (0);
}

size_t	ft_begidx(char const *s1, char const *set, size_t len)
{
	size_t	idx;
	size_t	s1_len;

	idx = 0;
	s1_len = ft_strlen(s1);
	while (idx < s1_len)
	{
		if (ft_isinset(&s1[idx], set, len))
			idx++;
		else
			break ;
	}
	return (idx);
}

size_t	ft_endidx(char const *s1, char const *set, size_t len)
{
	size_t	idx;

	idx = ft_strlen(s1) - 1;
	while (idx > 0)
	{
		if (ft_isinset(&s1[idx], set, len))
			idx--;
		else
			break ;
	}
	if (idx == 0)
	{
		if (!ft_isinset(&s1[idx], set, len))
			return (idx + 1);
	}
	return (idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg_idx;
	size_t	end_idx;
	char	*str;
	size_t	str_idx;

	beg_idx = ft_begidx(s1, set, ft_strlen(set));
	end_idx = ft_endidx(s1, set, ft_strlen(set));
	if (*s1 == 0 || beg_idx >= end_idx)
	{
		str = (char *)malloc(1);
		*str = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (end_idx - beg_idx + 1));
	if (!str)
		return (0);
	str_idx = 0;
	while (beg_idx <= end_idx)
	{
		str[str_idx] = s1[beg_idx];
		str_idx++;
		beg_idx++;
	}
	str[str_idx] = '\0';
	return (str);
}
