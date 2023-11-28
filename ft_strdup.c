/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:17:13 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/28 15:19:08 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

extern unsigned long	ft_strlen(const char *str);

char	*ft_strdup(const char *str)
{
	unsigned long	len;
	unsigned long	idx;
	char			*p;

	len = ft_strlen(str);
	idx = 0;
	p = (char*)malloc(len + 1);
	while (idx < len)
	{
		*(p + idx) = *(str + idx);
		idx++;
	}
	return (p);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "abc";
	char	*dst;

	dst = ft_strdup(str);
	printf("%s\n", dst);
	return (0);
}
