/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:18:02 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 23:29:25 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dst, void const *src, unsigned int len)
{
	unsigned char	*from;
	unsigned char	*to;
	unsigned int	idx;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	idx = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst > src)
	{
		while (idx++ < len)
			*(to + idx) = *(from + idx);
	}
	else
	{
		while (len-- >= 0)
			*(to + len - 1) = *(from + len - 1);
	}
	return (dst);
}
