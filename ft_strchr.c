/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:05:43 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/06 00:46:39 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(char const *s);

char	*ft_strchr(char *s, int c)
{
	unsigned int	len;
	unsigned int	idx;

	len = ft_strlen(s);
	idx = 0;
	while (idx < len + 1)
	{
		if (*(s + idx) == c)
			return (s + idx);
		idx++;
	}
	return (0);
}
