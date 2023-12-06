/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:25:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/06 12:47:19 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(char const *s);

char	*ft_strrchr(char *s, int c)
{
	long long	len;

	len = (long long)ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == c)
			return (s + len);
		len--;
	}
	return (0);
}
