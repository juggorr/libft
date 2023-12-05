/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:18:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/05 13:18:05 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *dst, void *src, unsigned long n)
{
	unsigned long	idx;

	idx = 0;
	while (idx < n)
	{
		*((char *)dst + idx) = (unsigned char)*((char *)src + idx);
		idx++;
	}
	return (dst);
}
