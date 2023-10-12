/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:13:07 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/12 16:45:04 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	*ft_memset(void *b, int c, unsigned long len);

void	ft_bzero(void *s, unsigned long n)
{
	ft_memset(s, 0, n);
}
