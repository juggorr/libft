/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:17:13 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/23 18:20:04 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned long	ft_strlen(const char *str);

char	*ft_strdup(const char *str)
{
	unsigned long	len;
	unsigned long	idx;
	char			*p;

	len = ft_strlen(str);
	idx = 0;
	p = (char*)malloc(len + 1);
	while (idx < len)
	{
		*(p + idx) = *(str + idx);
		idx++;
	}
	return (p);
}
