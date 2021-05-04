/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 13:06:21 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/04 17:27:16 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstclear(t_list **tail, void (*del)(void*))
{
	t_list	*next;
	t_list	*head;

	head = *tail;
	while (head)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = head->next;
	}
	*tail = 0;
}
