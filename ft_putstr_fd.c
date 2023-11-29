/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:32:13 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/29 16:11:08 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern unsigned long	ft_strlen(char const *s);

void	ft_putstr_fd(char *s, int fd)
{
	unsigned long	len;

	if (fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
