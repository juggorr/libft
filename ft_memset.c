/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:54 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/01 17:41:03 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	idx;
	unsigned char	cha;
	unsigned char	*tmp;

	idx = 0;
	cha = (unsigned char)c;
	tmp = (unsigned char *)b;
	while (idx < len)
	{
		*(tmp + idx) = cha;
		idx++;
	}
	return (b);
}
