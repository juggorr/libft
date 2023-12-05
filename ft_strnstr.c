/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:00:20 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/06 00:05:30 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned int	ft_strlen(const char *s1);

char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!ft_strlen(little))
		return ((char *)big);
	if (!ft_strlen(big) || n == 0)
		return (0);
	while (i < n)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j] && i + j < n)
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
