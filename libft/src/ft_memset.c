/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:07:57 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/25 16:18:00 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp_b;

	i = 0;
	tmp_b = (unsigned char*)b;
	while (i < len)
	{
		tmp_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
