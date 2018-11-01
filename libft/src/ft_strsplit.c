/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:38:38 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/28 18:01:24 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_wordcnt(char const *s, char c)
{
	int	count;
	int	start;

	start = 0;
	count = 0;
	while (*s != '\0')
	{
		if (start == 1 && *s == c)
			start = 0;
		if (start == 0 && *s != c)
		{
			start = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static	int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	int		word_nbr;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word_nbr = ft_wordcnt(s, c);
	if (!(tmp = (char**)malloc(sizeof(char*) * (ft_wordcnt(s, c) + 1))))
		return (NULL);
	while (word_nbr--)
	{
		while (*s == c && *s != '\0')
			s++;
		tmp[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (tmp[i] == NULL)
			return (NULL);
		s = s + ft_wordlen(s, c);
		i++;
	}
	tmp[i] = NULL;
	return (tmp);
}
