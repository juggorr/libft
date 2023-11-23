/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:01:10 by junghopa          #+#    #+#             */
/*   Updated: 2023/11/23 16:19:29 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned long	ft_strlen(const char *s)
{
	unsigned long	cnt;

	cnt = 0;
	while (*(s + cnt))
		cnt++;
	return (cnt);
}
