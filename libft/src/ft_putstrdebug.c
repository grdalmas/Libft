/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrdebug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:43:44 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/27 17:50:12 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrdebug(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putnbr(s[i]);
		ft_putchar(' ');
	}
}
