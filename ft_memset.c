/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:07:54 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/12 15:30:17 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	idx;
	unsigned char	cha;

	idx = 0;
	cha = (unsigned char) c;
	while (idx < len)
	{
		*((unsigned char *)b + idx) = cha;
		idx++;
	}
	return (b);
}
