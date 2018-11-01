/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:26:39 by grdalmas          #+#    #+#             */
/*   Updated: 2017/11/27 15:34:21 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tmp_malloc;
	t_list	*newlst;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp = f(lst);
	if (!(tmp_malloc = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	newlst = tmp_malloc;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(tmp_malloc->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		tmp_malloc = tmp_malloc->next;
		lst = lst->next;
	}
	return (newlst);
}
