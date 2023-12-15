/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:12:34 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/15 13:42:58 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *s)
{
	unsigned int	idx;
	char			sign;
	long			val;

	idx = 0;
	sign = 1;
	val = 0;
	while (*(s + idx) == 32 || (*(s + idx) >= 9 && *(s + idx) <= 13))
		idx++;
	if (*(s + idx) == 43 || *(s + idx) == 45)
	{
		if (*(s + idx) == 45)
			sign *= -1;
		idx++;
	}
	while (*(s + idx) >= 48 && *(s + idx) <= 57)
	{
		val = val * 10 + (*(s + idx) - 48);
		idx++;
	}
	return ((int)(sign * val));
}
