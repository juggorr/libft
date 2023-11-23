/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:12:32 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/22 13:17:51 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	idx;

	idx = 0;
	while (idx < n)
	{
		if ((unsigned char)*(s + idx) == (unsigned char)c)
			return (*(s + idx));
		idx++;
	}
	return (0);
}
