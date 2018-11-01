/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:20:35 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/25 17:53:15 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dst == NULL)
		return (NULL);
	dst = ft_strcpy(dst, s1);
	return (dst);
}
