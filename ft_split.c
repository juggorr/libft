/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:19:09 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 14:20:37 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(char const *s);

int	ft_count_words(char const *s, char c)
{
	int		words_cnt;
	int		flag;
	size_t	idx;

	words_cnt = 0;
	idx = 0;
	while (idx < ft_strlen(s))
	{
		if (s[idx] != c)
			flag = 1;
		else
		{
			if (flag)
				words_cnt += 1;
			flag = 0;
		}
		idx++;
	}
	if (flag)
		words_cnt++;
	return (words_cnt);
}

size_t	ft_strlen_split(char const *s, char c)
{
	size_t	idx;

	idx = 0;
	while (*(s + idx) && *(s + idx) != c)
		idx++;
	return (idx);
}

char	*ft_strdup_split(char const *s, char c)
{
	size_t	len;
	char	*str;
	size_t	idx;

	len = ft_strlen_split(s, c);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	idx = 0;
	while (idx < len)
	{
		*(str + idx) = *(s + idx);
		idx++;
	}
	str[idx] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		words_cnt;
	char	**res;
	size_t	str_idx;
	size_t	arr_idx;

	words_cnt = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	if (!res)
		return (0);
	str_idx = 0;
	arr_idx = 0;
	while (str_idx < ft_strlen(s))
	{
		while (s[str_idx] == c && s[str_idx])
			str_idx++;
		if (s[str_idx] != c && s[str_idx])
		{
			res[arr_idx] = ft_strdup_split(&s[str_idx], c);
			arr_idx++;
		}
		while (s[str_idx] != c && s[str_idx])
			str_idx++;
	}
	res[arr_idx] = 0;
	return (res);
}
