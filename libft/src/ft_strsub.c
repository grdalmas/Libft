/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:35:11 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/25 18:13:11 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	j = 0;
	i = start;
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	while (j < len)
	{
		tmp[j] = s[i];
		i++;
		j++;
	}
	return (tmp);
}
