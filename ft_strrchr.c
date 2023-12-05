/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:25:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/05 19:11:55 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(char const *s);

char	*ft_strrchr(char *s, int c)
{
	unsigned int	len;
	unsigned int	idx;

	len = ft_strlen(s);
	idx = len + 1;
	while (idx >= 0)
	{
		if (*(s + idx) == c)
			return (s);
		idx--;
	}
	return (0);
}
