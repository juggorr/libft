/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:19:55 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 19:11:55 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	idx;
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	unsigned char	res;

	idx = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (idx++ < n)
	{
		if ((unsigned char)*(tmp1 + idx) != (unsigned char)*(tmp2 + idx))
		{
			res = (unsigned char)*(tmp1 + idx) - (unsigned char)*(tmp2 + idx);
			return (res);
		}
	}
	return (0);
}
