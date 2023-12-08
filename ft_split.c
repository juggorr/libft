/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:19:09 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/08 20:05:35 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static size_t	ft_strlen_split(char const *s, char c)
{
	size_t	idx;

	idx = 0;
	while (*(s + idx) && *(s + idx) != c)
		idx++;
	return (idx);
}

static void	free_mems(char **res, size_t arr_idx)
{
	long long	idx;

	idx = (long long)arr_idx;
	idx -= 1;
	while (idx >= 0)
	{
		free(res[idx]);
		idx--;
	}
	free(res);
}

static char	ft_strdup_split(char const *s, char c, char **res, size_t	arr_idx)
{
	size_t	len;
	char	*str;
	size_t	idx;

	len = ft_strlen_split(s, c);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free_mems(res, arr_idx);
		return (0);
	}
	idx = 0;
	while (idx < len)
	{
		*(str + idx) = *(s + idx);
		idx++;
	}
	str[idx] = '\0';
	res[arr_idx] = str;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words_cnt;
	char	**res;
	size_t	arr_idx;

	words_cnt = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	if (!res)
		return (0);
	arr_idx = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!ft_strdup_split(s, c, res, arr_idx))
				return (0);
			arr_idx++;
		}
		while (*s != c && *s)
			s++;
	}
	res[arr_idx] = 0;
	return (res);
}
