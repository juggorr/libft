/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:32:13 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 19:11:55 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

extern unsigned int	ft_strlen(char const *s);

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	if (fd < 0)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
}
