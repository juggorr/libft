/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:00:20 by juggorr           #+#    #+#             */
/*   Updated: 2023/11/23 17:11:41 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned long	ft_strlen(const char *s1);

char	*ft_strnstr(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	i;
	unsigned long	j;
	
	i = 0;
	if (!ft_strlen(s2))
		return ((char*)s1);
	while (i < n)
	{
		j = 0;
		while (s1[i + j] && s2[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char*)(s1 + i));
		i++;
	}
	return (0);
}

#include<unistd.h>
int	main(void)
{
	char	*s1;

	s1 = ft_strnstr("abd", "bc", 3);
	write(1, s1, 1);
	return (0);
}
