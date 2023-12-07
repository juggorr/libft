/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:25:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/07 14:17:05 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(char const *s);

char	*ft_strrchr(char *s, int c)
{
	long long		len;
	unsigned char	uc;

	len = (long long)ft_strlen(s);
	uc = (unsigned char)c;
	while (len >= 0)
	{
		if (*(s + len) == uc)
			return (s + len);
		len--;
	}
	return (0);
}
