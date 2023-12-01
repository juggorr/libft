/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:18:02 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/01 17:45:12 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dst, void const *src, unsigned long len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dst;
	while (len-- > 0)
		*tmp++ = *(unsigned char *)src;
	return (dst);
}
