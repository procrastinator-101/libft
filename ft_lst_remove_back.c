/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 10:42:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/03 11:00:20 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove_back(t_list **tail, void (*del)(void*))
{
	t_list	*head;

	if (!*tail)
		return ;
	head = *tail;
	if (head->next)
	{
		del(head);
		*tail = 0;
		return ;
	}
	while (head->next)
	{
		if (!head->next->next)
			break ;
		head = head->next;
	}
	del(head->next);
	head->next = 0;
}
