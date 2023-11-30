/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:37:57 by junghopa          #+#    #+#             */
/*   Updated: 2023/11/30 16:05:57 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	idx;

	idx = 0;
	while (idx < n - 1)
	{
		if (*(s1 + idx) != *(s2 + idx))
			break;
		else
			idx++;
	}
	return (*(s1 + idx) - *(s2 + idx));
}
