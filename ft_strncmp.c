/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:37:57 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/08 12:45:38 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (idx + 1 < n && s1[idx] && s2[idx])
	{
		if (*(s1 + idx) != *(s2 + idx))
			break ;
		idx++;
	}
	return ((unsigned char)*(s1 + idx) - (unsigned char)*(s2 + idx));
}
