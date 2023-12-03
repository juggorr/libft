/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:54 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/03 17:46:23 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	idx;
	unsigned char	uc;
	unsigned char	*tmp;

	idx = 0;
	uc = (unsigned char) c;
	tmp = b;
	while (idx++ < len)
		*tmp++ = uc;
	return (b);
}
