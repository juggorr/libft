/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:16:05 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/09 18:10:58 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned long	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned long	i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
