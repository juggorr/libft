/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:12:34 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 00:10:14 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *s1)
{
	unsigned int	idx;
	char			sign;
	long			val;

	idx = 0;
	sign = 1;
	val = 0;
	while (*(s1 + idx) == 32 || (*(s1 + idx) >= 9 && *(s1 + idx) <= 13))
		idx++;
	if (*(s1 + idx) == 43 || *(s1 + idx) == 45)
	{
		if (*(s1 + idx) == 45)
			sign *= -1;
		idx++;
	}
	while (*(s1 + idx) >= 48 && *(s1 + idx) <= 57)
	{
		val = val * 10 + (*(s1 + idx) - 48);
		idx++;
	}
	return ((int)(sign * val));
}
