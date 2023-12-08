/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:05:43 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/08 09:18:21 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	unsigned int	len;
	unsigned int	idx;
	unsigned char	uc;

	len = ft_strlen(s);
	idx = 0;
	uc = (unsigned char)c;
	while (idx < len + 1)
	{
		if (*(s + idx) == uc)
			return (s + idx);
		idx++;
	}
	return (0);
}
