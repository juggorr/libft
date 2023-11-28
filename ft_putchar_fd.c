/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:21:29 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/28 20:41:08 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(1, &c, fd);
}

int	main(void)
{
	ft_putchar_fd('1', -1);
	return (0);
}
