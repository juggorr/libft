/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghopa <juhnhopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:25:42 by junghopa          #+#    #+#             */
/*   Updated: 2023/10/12 17:31:41 by junghopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern unsigned long	ft_strlen(char *s);

char	*ft_strrchr(char *s, int c)
{
    unsigned long   len;
    unsigned long   idx;

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
