/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:12:32 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 14:49:51 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	idx;
	unsigned char	uc;

	idx = 0;
	uc = (unsigned char)c;
	while (idx++ < n)
	{
		if ((unsigned char)*((char *)s + idx) == uc)
			return ((void *)((char *)s + idx));
	}
	return (0);
}
