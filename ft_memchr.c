/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:12:32 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/01 17:49:20 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	idx;
	unsigned char	ucc;

	idx = 0;
	ucc = (unsigned char)c;
	while (idx < n)
	{
		if ((unsigned char)s[idx] == ucc)
			return (*(s + idx));
		idx++;
	}
	return (0);
}
