/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 19:10:22 by grdalmas          #+#    #+#             */
/*   Updated: 2018/02/05 19:10:33 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *lst, t_list *new)
{
	if ((!lst) || (!new))
		return ;
	while (lst->next)
		lst = lst->next;
	lst->next = new;
	if (new->next)
		new->next = NULL;
}
