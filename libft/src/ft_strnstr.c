/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:00:03 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/14 19:12:11 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		f = 0;
		while (haystack[i + f] == needle[f] && needle[f] && haystack[i + f]
				&& (i + f) <= len)
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
