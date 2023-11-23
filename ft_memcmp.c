/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:19:55 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/23 15:53:19 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned long	idx;

	idx = 0;
	while(idx < n)
	{
		if ((unsigned char)*(s1 + idx) != (unsigned char)*(s2 + idx))
			return ((unsigned char)*(s1 + idx) - (unsigned char)*(s2 + idx));
		idx++;
	}
	return (0);
}
