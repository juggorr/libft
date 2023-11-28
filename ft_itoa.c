/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:53:19 by junghopa          #+#    #+#             */
/*   Updated: 2023/11/28 17:20:00 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>

char	ft_digits_cnt(int n)
{
	char	cnt;

	if (n == -2147483648)
		return (11);
	cnt = 0;
	if (n < 0)
	{
		cnt++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

void	ft_pos_itoa(char *res, int n, unsigned char len)
{
	res[len] = '\0';
	while (n > 0)
	{
		res[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	printf("%s\n", res);
}

char	*ft_itoa(int n)
{
	unsigned char	len;
	char			*res;

	len = ft_digits_cnt(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	if (n >= 0)	
		ft_pos_itoa(res, n, len);
	return (res);	
}

#include<stdio.h>
int	main(void)
{
	char	*a;

	a = ft_itoa(2147483647);
	printf("%s\n", a);
	return (0);
}
