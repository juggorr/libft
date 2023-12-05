/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:18:02 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 18:23:05 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dst, void const *src, unsigned int len)
{
	unsigned char	*from;
	unsigned char	*to;
	unsigned int	idx;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	idx = 0
	if (from == to || len == 0)
		return (dst);
	if (from > to)
	{
		while (idx < len)
		{
			to[idx] = from[idx];
			idx++;
		}
	}
	if (from < to)
	{
		while (len >= 0)
		{
			to[len] = from[len];
			len--;
		}
	}
	return (dst);
}
