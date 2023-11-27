/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:56 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/27 19:57:44 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

extern size_t	ft_strlen(const char *str);

void	ft_fillstr(char *str, size_t *str_idx, char const *s)
{
	size_t	idx;

	idx = 0;
	while (idx < ft_strlen(s))
	{
		str[*str_idx] = s[idx];
		idx++;
		*(str_idx)++;
	}
	return ;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	*str_idx;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	*str_idx = 0;
	ft_fillstr(str, str_idx, s1);
	ft_fillstr(str, str_idx, s2);
	str[*str_idx] = '\0';
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	*s1 = "abc";
	char	*s2 = "123";
	char	*str;

	str = ft_strjoin(s1, s2);
	printf("str: %s\n", str);
	return (0);
}
