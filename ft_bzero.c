/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:13:07 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/01 17:42:17 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	*ft_memset(void *b, int c, unsigned long len);

void	ft_bzero(void *s, unsigned long n)
{
	ft_memset(s, 0, n);
}
