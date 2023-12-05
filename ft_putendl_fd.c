/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:46:47 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 19:11:55 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(const char *s);

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

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
