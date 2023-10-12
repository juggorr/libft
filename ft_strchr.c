/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:05:43 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/12 17:25:20 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned long	ft_strlen(char *s);

char	*ft_strchr(char *s, int c)
{
	unsigned long	len;
	unsigned long	idx;

	len = ft_strlen(s);
	idx = 0;
	while (idx < len + 1)
	{
		if (*(s + idx) == c)
			return (s);
		idx++;
	}
	return (0);
}
