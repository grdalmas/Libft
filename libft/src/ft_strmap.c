/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:19:06 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/27 16:55:41 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(tmp = ft_strdup(s)))
		return (NULL);
	while (tmp[i] != '\0')
	{
		tmp[i] = f(tmp[i]);
		i++;
	}
	return (tmp);
}
