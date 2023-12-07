/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:57:38 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/07 17:44:39 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(const char *s);

unsigned long	ft_strlcat(char *dest, char *src, unsigned long size)
{
	unsigned long	dest_size;
	unsigned long	src_size;
	unsigned long	i;
	unsigned long	j;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = dest_size;
	j = 0;
	while (i + 1 < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dest_size < size)
		return (src_size + dest_size);
	else
		return (src_size + size);
}
