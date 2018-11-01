/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:06:55 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/25 16:10:41 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_neg_itoa(int *n, int *neg)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*neg = 1;
	}
}

char			*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbrlen(n);
	neg = 0;
	ft_neg_itoa(&n, &neg);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	while (len > 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (neg == 1)
		str[0] = '-';
	else
		str[0] = n + 48;
	return (str);
}
