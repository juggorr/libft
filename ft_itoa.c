/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:53:19 by junghopa          #+#    #+#             */
/*   Updated: 2023/12/08 09:18:21 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	ft_digits_cnt(int n)
{
	char	cnt;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
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

static void	ft_neg_itoa(char *res, long long n, unsigned char len)
{
	n = -n;
	res[len] = '\0';
	len--;
	while (len > 0)
	{
		res[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	res[len] = '-';
}

static void	ft_pos_itoa(char *res, long long n, unsigned char len)
{
	res[len] = '\0';
	len--;
	if (n == 0)
		res[len] = n + 48;
	while (n > 0)
	{
		res[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	unsigned char	len;
	char			*res;

	len = ft_digits_cnt(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	n = (long long)n;
	if (!res)
		return (0);
	if (n >= 0)
		ft_pos_itoa(res, n, len);
	else
		ft_neg_itoa(res, n, len);
	return (res);
}
