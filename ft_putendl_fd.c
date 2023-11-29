/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:46:47 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/29 16:14:45 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern unsigned long	ft_strlen(char *s);

void	ft_putendl_fd(char *s, int fd)
{
	unsigned long	len;

	if (fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("abc", 1);
}
