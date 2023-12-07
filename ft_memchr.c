/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:12:32 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 22:48:52 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	idx;
	unsigned char	uc;
	unsigned char	*tmp;

	idx = 0;
	uc = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (idx < n)
	{
		if (*(tmp + idx) == uc)
			return ((void *)(tmp + idx));
		idx++;
	}
	return (0);
}
