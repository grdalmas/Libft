/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:24:43 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/27 15:34:32 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	int		start;
	int		len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] && (s[start] == ' ' || s[start] == '\n' ||
				s[start] == '\t'))
		start++;
	while (start < end && (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1]
				== '\t'))
		end--;
	if (start == end)
		return (ft_strnew(1));
	len = end - start;
	return (ft_strsub(s, start, len));
}
