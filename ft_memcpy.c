/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:18:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/12 16:33:33 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	*ft_memcpy(void *dst, void *src, unsigned long n)
{
	unsigned long	idx;

	idx = 0;
	while (idx < n)
	{
		*((char *)dst + idx) = *((char *)src + idx);
		idx++;
	}
	return (dst);
}

#include<stdio.h>
int	main(void)
{
	char	dst[6] = "dst";
	char	src[6] = "src";

	printf("pre dst : %s\n", dst);
	ft_memcpy(dst, src, 2);
	printf("postdst : %s\n", dst);
	return (0);
}
