/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 10:56:12 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/03 11:14:24 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove_front(t_list **tail, void (*del)(void*))
{
	t_list	*new_tail;

	if (!(*tail))
		return ;
	new_tail = (*tail)->next;
	del((*tail)->content);
	free(*tail);
	*tail = new_tail;
}
