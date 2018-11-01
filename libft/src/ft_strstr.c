/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:03:20 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/14 18:54:30 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	f;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		f = 0;
		while (haystack[i + f] == needle[f] && needle[f] && haystack[i + f])
		{
			if (needle[f + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			f++;
		}
		i++;
	}
	return (NULL);
}
