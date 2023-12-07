/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:18:02 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/07 17:03:21 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	*ft_memcpy(void *dst, const void *src, unsigned int len);

void	*ft_memmove(void *dst, void const *src, unsigned int len)
{
	unsigned char	*from;
	unsigned char	*to;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		from = (unsigned char *)src;
		to = (unsigned char *)dst;
		while (len--)
			*to++ = *from++;
	}
	else
	{
		from = (unsigned char *)src + len - 1;
		to = (unsigned char *)dst + len - 1;
		while (len--)
			*to-- = *from--;
	}
	return (dst);
}
