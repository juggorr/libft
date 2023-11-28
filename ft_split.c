/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:19:09 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/28 12:37:21 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>

extern size_t	ft_strlen(char const *s);

int	ft_count_words(char const *s, char c)
{
	int		words_cnt;
	int		flag;
	size_t	idx;

	words_cnt = 0;
	flag = 0;
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
	return (words_cnt);
}

char	**ft_split(char const *s, char c)
{
	int		words_cnt;
	char	**str;

	words_cnt = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words_cnt + 1));
	printf("words: %d\n", words);
	return (str);
}

int	main(void)
{
	ft_split("111", '1');
	return (0);
}
